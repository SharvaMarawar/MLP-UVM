
import os
import re
import pandas as pd
import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt

CSV_FILE = "results/coverage_detail.csv"
OUTPUT_DIR = "results/coverage_graphs"

os.makedirs(OUTPUT_DIR, exist_ok=True)

df = pd.read_csv(CSV_FILE)

required = {"group", "coverpoint", "bin", "hits", "covered"}
if not required.issubset(df.columns):
    raise ValueError(f"CSV must contain columns: {required}")

df["hits"] = pd.to_numeric(df["hits"])
df["covered"] = pd.to_numeric(df["covered"])

def safe_name(value):
    return re.sub(r"[^a-zA-Z0-9_-]", "_", str(value))

# Generate individual coverpoint graphs
for (group, coverpoint), data in df.groupby(
    ["group", "coverpoint"], sort=False
):
    data = data.reset_index(drop=True)

    bins = data["bin"].astype(str)
    hits = data["hits"]
    percentage = 100 * data["covered"].sum() / len(data)

    fig, ax = plt.subplots(figsize=(10, 5))

    bars = ax.bar(bins, hits)

    ax.set_title(
        f"{group.upper()} - {coverpoint}\n"
        f"Bin Coverage: {percentage:.1f}%"
    )
    ax.set_xlabel("Coverage bins")
    ax.set_ylabel("Number of hits")
    ax.grid(axis="y", alpha=0.3)

    for bar, count in zip(bars, hits):
        ax.text(
            bar.get_x() + bar.get_width() / 2,
            bar.get_height(),
            str(count),
            ha="center",
            va="bottom"
        )

    plt.xticks(rotation=35, ha="right")
    plt.tight_layout()

    filename = (
        f"{safe_name(group)}_{safe_name(coverpoint)}.png"
    )
    plt.savefig(os.path.join(OUTPUT_DIR, filename), dpi=150)
    plt.close(fig)

# Generate one coverage-percentage summary per group
for group, data in df.groupby("group", sort=False):
    summary = (
        data.groupby("coverpoint")
        .agg(
            total_bins=("bin", "count"),
            covered_bins=("covered", "sum")
        )
    )

    summary["coverage"] = (
        100 * summary["covered_bins"] / summary["total_bins"]
    )

    fig, ax = plt.subplots(figsize=(12, 6))

    bars = ax.barh(summary.index, summary["coverage"])

    ax.set_xlim(0, 105)
    ax.set_xlabel("Coverage (%)")
    ax.set_title(f"{group.upper()} - Coverpoint Coverage Summary")
    ax.grid(axis="x", alpha=0.3)

    for bar, value in zip(bars, summary["coverage"]):
        ax.text(
            value + 1,
            bar.get_y() + bar.get_height() / 2,
            f"{value:.1f}%",
            va="center"
        )

    plt.tight_layout()

    filename = f"{safe_name(group)}_summary.png"
    plt.savefig(os.path.join(OUTPUT_DIR, filename), dpi=150)
    plt.close(fig)

print("Coverage graphs generated successfully.")
print(f"Output directory: {OUTPUT_DIR}")
print(f"Individual coverpoint graphs: {df.groupby(['group', 'coverpoint']).ngroups}")
print(f"Coverage groups: {df['group'].nunique()}")
