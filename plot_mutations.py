import csv
from collections import defaultdict
from html import escape
from pathlib import Path

csv_path = Path("mutation_testing/campaign_9fjhiss4/summary.csv")
with csv_path.open(newline="", encoding="utf-8-sig") as file:
    rows = list(csv.DictReader(file))

by_test = defaultdict(list)
for row in rows:
    if row["Result"] == "Killed":
        test = row["Tests executed"].split(",")[-1].strip()
        by_test[test].append(row["Mutation"])

tests = sorted(by_test, key=lambda test: -len(by_test[test]))
total = sum(len(ids) for ids in by_test.values())
scale = 300 / max((len(ids) for ids in by_test.values()), default=1)
height = 120 + 48 * len(tests)

svg = [
    f'<svg xmlns="http://www.w3.org/2000/svg" width="760" height="{height}">',
    '<rect width="100%" height="100%" fill="white"/>',
    '<g font-family="Arial, sans-serif" fill="#17283a">',
    '<text x="24" y="36" font-size="24">MLP layer mutation testing</text>',
    f'<text x="24" y="65" font-size="16">'
    f'{total} of {len(rows)} mutations detected · Grouped by first detecting UVM test</text>',
]

for index, test in enumerate(tests):
    ids = by_test[test]
    y = 90 + index * 48
    width = len(ids) * scale
    label = escape(f"{len(ids)} ({', '.join(ids)})")
    svg.extend([
        f'<text x="24" y="{y + 19}">{escape(test)}</text>',
        f'<rect x="200" y="{y}" width="{width}" height="26" fill="#3478a5"/>',
        f'<text x="{210 + width}" y="{y + 19}">{label}</text>',
    ])

svg.append("</g></svg>")
output = csv_path.with_name("mutation_detection.svg")
output.write_text("\n".join(svg), encoding="utf-8")
print(f"Plot saved to {output.resolve()}")
