# MLP layer UVM verification

This project verifies a programmable, two-stage MLP layer with four signed 8-bit inputs and four neuron outputs. The DUT computes a weighted sum and bias for each neuron, applies an arithmetic shift and Leaky ReLU, and clamps the result to the signed 8-bit range. The UVM testbench checks the output values and how the pipeline handles transfers, stalls, configuration writes, and reset.

## Start here

All paths below are relative to the `mlp_uvm/` project root. The saved results can be reviewed directly.

| Evaluation question | Open this first | What to look for |
| --- | --- | --- |
| What hardware was verified? | [rtl/mlp_layer.sv](rtl/mlp_layer.sv) | Configuration registers, stage-1 accumulators, stage-2 activation and clamp, and ready/valid control. |
| Did the final regression pass? | [Final simulation log](results/closure_regress_J6fBly/simulation.log) | Search for `outputs checked`, `assertion failures`, and `TEST PASSED`. The recorded run matched all 908 checked outputs and reported zero assertion failures. |
| What changed during coverage closure? | [Baseline CSV](results/closure_baseline_3768kkfl/coverage_detail.csv) and [final CSV](results/closure_regress_J6fBly/results/coverage_detail.csv) | The baseline hit 169/169 exported bins. In the final CSV, filter `coverpoint` to `sat_boundary` to see the four added bins for exact and clamped results at both limits. The final run hit 173/173. |
| Did the testbench detect deliberately injected faults? | [Campaign report](mutation_testing/campaign_9fjhiss4/report.txt) and [per-mutant results](mutation_testing/campaign_9fjhiss4/summary.csv) | The completed campaign records the detecting test and result for each of the eight injected faults. All eight were detected. |
| Where can I see the hardware in operation? | [GTKWave screenshots](results/waveform_screenshots/) and [original VCD traces](results/waveforms/) | Open a screenshot for a quick review or use the matching VCD and time window listed below. |

## RTL and UVM source map

The DUT is in `rtl/`. The SystemVerilog testbench files are in the project root.

| What to inspect | Files | Role |
| --- | --- | --- |
| Simulation entry point and interface | [tb_top.sv](tb_top.sv), [mlp_if.sv](mlp_if.sv) | The top connects the DUT and interface and starts UVM. The interface exposes the pins and contains the protocol assertions. |
| Environment and connections | [mlp_env.sv](mlp_env.sv), [mlp_agent.sv](mlp_agent.sv) | The agent connects the sequencer to the driver and exposes the monitor’s input and output ports. The environment connects those ports to the scoreboard and connects the scoreboard to coverage. |
| Test selection and stimulus | [mlp_tests.sv](mlp_tests.sv), [mlp_sequences.sv](mlp_sequences.sv) | The ten named tests cover Iris, single-vector, random, sparse, corner, saturation, reset, configuration, stall, and combined regression scenarios. Open the test file to identify the sequence, then the sequence file to inspect the stimulus. |
| Transactions and pin activity | [mlp_items.sv](mlp_items.sv), [mlp_driver.sv](mlp_driver.sv), [mlp_monitor.sv](mlp_monitor.sv) | Defines transaction fields, drives requests onto the interface, and observes what the DUT actually accepted or produced. |
| Expected results and comparisons | [mlp_ref_model.sv](mlp_ref_model.sv), [mlp_scoreboard.sv](mlp_scoreboard.sv) | The model predicts each neuron output. The scoreboard tracks pending predictions, accounts for samples flushed by reset, and compares each completed output transfer. |
| Functional coverage | [mlp_coverage.sv](mlp_coverage.sv) | Inference, configuration, reset, and saturation-boundary sampling, plus the counters exported to CSV. |
| Data loading and configuration | [mlp_dataset.sv](mlp_dataset.sv), [mlp_env_cfg.sv](mlp_env_cfg.sv) | Reads the verification datasets and makes test settings and datasets available to the environment. |
| Package and compilation inputs | [mlp_pkg.sv](mlp_pkg.sv), [mlp_defines.svh](mlp_defines.svh), [files.f](files.f) | Package organization, shared definitions, and the simulation source file list. |

## Inputs and Python tools

| Location | Contents |
| --- | --- |
| [data/](data/) | `iris_cfg.txt` and `iris_vectors.txt` are the Iris configuration and verification vectors. `sat_cfg.txt` and `sat_vectors.txt` are the directed saturation configuration and vectors. |
| [data/iris_model.json](data/iris_model.json) and [data/iris_dataset_1200.csv](data/iris_dataset_1200.csv) | Exported Iris model parameters and the 1,200-row dataset. |
| [tools/](tools/) | `IRIS.csv` is the source dataset. `iris_model.py` contains the model training and export workflow. `mlp_golden.py` and `rtl_model_check.py` support numerical checking. `gen_sat_vectors.py` generates saturation stimuli. `plot_coverage.py` plots exported coverage. |

## Waveform index

The following windows refer to the saved traces in [results/waveforms/](results/waveforms/). Times are in nanoseconds.

| Demonstration | Trace | Window | Signal or event to inspect |
| --- | --- | --- | --- |
| Reset and recovery | `mlp_reset.vcd` | 4825–4955 | Reset asserts at 4855 ns with both stages occupied. A new result becomes valid at 4925 ns. |
| Normal two-stage transfer | `mlp_single.vcd` | 490–535 | Input acceptance at 505 ns, output valid at 515 ns, output handshake at 525 ns. |
| Positive saturation | `mlp_sat.vcd` | 530–570 | Lane 0 captures 4000 and produces `0x7F` (+127). |
| Negative saturation | `mlp_sat.vcd` | 550–590 | Lane 0 captures −4000 and produces `0x80` (−128) after activation and clamping. |
| Negative Leaky ReLU | `mlp_single.vcd` | 490–535 | Lane 2 captures −401. Output bits 23 through 16 carry `0xF3` (−13). |
| Configuration while busy and idle | `mlp_cfg.vcd` | 11545–11605 | Follow three writes to address 17. Only the idle write changes `bias[1]`. |
| Pipeline backpressure | `mlp_stall.vcd` | 795–885 | The output holds `0x000315FC` across four stalled rising edges and transfers at 865 ns. |

## Other folders and utilities

| Location | Purpose |
| --- | --- |
| [results/coverage_detail.csv](results/coverage_detail.csv) and [results/coverage_graphs/](results/coverage_graphs/) | Earlier coverage export and plots. The final closure CSV is inside `results/closure_regress_J6fBly/results/`. |
| [mutation_testing/](mutation_testing/) | Campaign directories, the `backups/` folder, and `mutation_1_build.log`. Use `campaign_9fjhiss4/` for the reported eight-mutant result. The root-level `run_mlp_mutations.py` runs campaigns and `plot_mutations.py` is the plotting utility. |
| `build_verilator/`, `build_verilator_trace/`, `build_verilator_closure/` | Generated Verilator builds for standard simulation, waveform tracing, and coverage closure. The closure executable is `build_verilator_closure/Vtb_top`. |
| `build_mutation_sat/` and `.venv/` | Generated saturation-mutation build and local Python environment, respectively. |
| [Makefile](Makefile) and `cov_hier.cfg` | Build targets and coverage hierarchy settings for the included VCS flow. The saved closure evidence above comes from Verilator. |
