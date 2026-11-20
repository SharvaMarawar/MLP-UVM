"""Run from the mlp_uvm project root with Python 3 on WSL."""
import csv
import difflib
import hashlib
import os
import re
import shutil
import subprocess
import tempfile
from pathlib import Path

ROOT = Path.cwd()
DIGEST = "e72be3ea912f8e4e18b99de0d5e8b23cc3f45169ef409c495227ca1de1f0caa2"
REGRESS = "mlp_regress_test"
# Each edit is applied independently to the verified golden source.
CASES = [
    ("M1", "High clamp returns 126", "return 8'sd127;", "return 8'sd126;", "mlp_sat_test"),
    ("M2", "Low clamp returns -127", "return -8'sd128;", "return -8'sd127;", "mlp_sat_test"),
    ("M3", "Logical requantization shift", "s = a >>> sh;", "s = a >> sh;", "mlp_iris_test"),
    ("M4", "Zero negative activations", "s = s >>> leak_sh;", "s = '0;", "mlp_corner_test"),
    ("M5", "Omit neuron bias", "sum = ACC_W'(bias[n]);", "sum = '0;", "mlp_iris_test"),
    ("M6", "Accept configuration writes while busy", "else if (wr_en && !busy)", "else if (wr_en)", "mlp_cfg_test"),
    ("M7", "Expose input ready during writes", "assign in_ready = s1_ready && !wr_en;", "assign in_ready = s1_ready;", "mlp_cfg_test"),
    ("M8", "Reset leak shift to zero", "leak_shift_r <= 3'd3;", "leak_shift_r <= 3'd0;", "mlp_reset_test"),
]


def mutate(golden, before, after):
    if golden.count(before.encode()) != 1:
        raise ValueError(f"Expected exactly one RTL edit site for {before}")
    return golden.replace(before.encode(), after.encode())


def classify(log, rc, test):
    if not re.search(r"\[RNTST\]\s+Running test " + re.escape(test) + r"\b", log):
        return "Invalid", "Requested test start missing"
    for line in log.splitlines():
        if re.match(r"^UVM_ERROR\s", line) and re.search(r"\[(MISMATCH|UNEXPECTED|LOST|ASSERT|BUSY|ACCURACY)\]", line):
            return "Killed", line.strip()
        if "[MLP_IF] a_" in line and ("%Error" in line or "Assertion failed" in line):
            return "Killed", line.strip()
    counts = re.search(r"outputs checked\s*:\s*(\d+)\s+match\s+(\d+)\s+mismatch\s+(\d+)", log)
    if (rc == 0 and "*** TEST PASSED ***" in log and counts
            and int(counts[1]) > 0 and counts[1] == counts[2] and int(counts[3]) == 0
            and all(re.search(r"^\s*UVM_" + severity + r"\s*:\s*0\s*$", log, re.M)
                    for severity in ("ERROR", "FATAL"))):
        return "Passed", counts[0].strip()
    return "Invalid", f"Exit {rc}; incomplete run or unclassified diagnostic; inspect log"


def main():
    backup = ROOT / "mutation_testing/backups/mlp_layer.sv.original"
    rtl = ROOT / "rtl/mlp_layer.sv"
    golden = backup.read_bytes()
    if hashlib.sha256(golden).hexdigest() != DIGEST:
        raise SystemExit("Original backup checksum differs; inspect backup.")
    variants = [mutate(golden, case[2], case[3]) for case in CASES]
    current = rtl.read_bytes()
    if current not in (golden, variants[0]):
        raise SystemExit("Working RTL contains other edits; inspect before running.")
    install = Path.home() / "uvm_workspace/verilator-uvm-example"
    verilator = install / "verilator/bin/verilator"
    uvm = install / "1800.2-2020.3.1/src"
    version = subprocess.check_output([verilator, "--version"], text=True).strip()
    if not version.startswith("Verilator 5.053 ") or not (uvm / "uvm_pkg.sv").is_file():
        raise SystemExit("Expected Verilator 5.053 and the UVM package.")
    os.environ["UVM_HOME"] = str(uvm)
    os.environ["PATH"] = str(verilator.parent) + os.pathsep + os.environ["PATH"]
    out = Path(tempfile.mkdtemp(prefix="campaign_", dir=ROOT / "mutation_testing"))
    print(f"Evidence folder: {out}", flush=True)
    if current != golden:
        with tempfile.NamedTemporaryFile(dir=rtl.parent, delete=False) as replacement:
            replacement.write(golden)
        shutil.copymode(rtl, replacement.name)
        os.replace(replacement.name, rtl)
    if rtl.read_bytes() != golden:
        raise SystemExit("RTL restoration failed")
    tests = list(dict.fromkeys([case[4] for case in CASES] + [REGRESS]))
    with tempfile.TemporaryDirectory(prefix="mlp_mutations_") as tmp:
        work = Path(tmp)
        source = work / "mlp_layer.sv"
        obj = work / "obj"
        build = [str(verilator), "--binary", "--timing", "--assert", "-j", "4", "-Wall",
                 "-Wno-fatal", "--top-module", "tb_top", "--Mdir", str(obj), "+incdir+.",
                 f"+incdir+{uvm}", "+define+UVM_NO_DPI", str(uvm / "uvm_pkg.sv"),
                 str(source), "mlp_if.sv", "mlp_pkg.sv", "tb_top.sv"]

        def compile_rtl(folder, content):
            source.write_bytes(content)
            # Regenerate the model for every edit; make may reuse unchanged objects.
            (obj / "Vtb_top__verFiles.dat").unlink(missing_ok=True)
            print(f"{folder.name}: compiling", flush=True)
            with (folder / "build.log").open("w") as stream:
                return subprocess.run(build, stdout=stream, stderr=subprocess.STDOUT).returncode == 0

        def simulate(folder, test):
            run = folder / test
            (run / "results").mkdir(parents=True)
            log = run / "simulation.log"
            print(f"{folder.name}: {test}", flush=True)
            with log.open("w") as stream:
                try:
                    rc = subprocess.run([obj / "Vtb_top", f"+UVM_TESTNAME={test}",
                                         f"+DATA_DIR={ROOT / 'data'}", "+verilator+seed+1"],
                                        cwd=run, stdout=stream, stderr=subprocess.STDOUT,
                                        timeout=180).returncode
                except subprocess.TimeoutExpired:
                    rc = "timeout"
            return classify(log.read_text(errors="replace"), rc, test)

        baseline = out / "baseline"
        baseline.mkdir()
        if not compile_rtl(baseline, golden):
            raise SystemExit(f"Baseline build failed. See {baseline / 'build.log'}")
        for test in tests:
            verdict, detail = simulate(baseline, test)
            if verdict != "Passed":
                raise SystemExit(f"Baseline failed for {test}: {detail}. See {baseline / test}")
        totals = dict.fromkeys(("Killed", "Survived", "Invalid"), 0)
        with (out / "summary.csv").open("w", newline="") as stream:
            writer = csv.writer(stream)
            writer.writerow(["Mutation", "Injected bug", "Tests executed", "Result", "Evidence"])
            for (mid, description, _, _, directed), content in zip(CASES, variants):
                folder = out / mid
                folder.mkdir()
                patch = difflib.unified_diff(golden.decode().splitlines(True),
                                             content.decode().splitlines(True), "original", mid)
                (folder / "change.diff").write_text("".join(patch))
                ran = []
                verdict, detail = "Invalid", "Build failed; see build.log"
                if compile_rtl(folder, content):
                    for test in (directed, REGRESS):
                        ran.append(test)
                        verdict, detail = simulate(folder, test)
                        if verdict != "Passed":
                            break
                    if verdict == "Passed":
                        verdict = "Survived"
                writer.writerow([mid, description, ", ".join(ran), verdict, detail])
                stream.flush()
                totals[verdict] += 1
                print(f"{mid}: {verdict}", flush=True)
    if rtl.read_bytes() != golden or backup.read_bytes() != golden:
        raise SystemExit("Final RTL or backup checksum changed during campaign.")
    summary = (f"The existing UVM environment was evaluated using {len(CASES)} independent "
               f"RTL mutations and Verilator seed 1. A directed test was run first, followed "
               f"by regression when it passed. The testbench detected {totals['Killed']} "
               f"mutations. {totals['Survived']} survived the selected tests and "
               f"{totals['Invalid']} experiments were inconclusive.\n"
               f"Simulator: {version}\nVerified original RTL SHA-256: {DIGEST}\n")
    (out / "report.txt").write_text(summary)
    print(summary, f"Results: {out / 'summary.csv'}")


if __name__ == "__main__":
    main()
