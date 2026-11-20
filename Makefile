# -----------------------------------------------------------------------------
# Makefile for the mlp_layer UVM testbench  (Synopsys VCS, same flow as the lab guide)
#
#   make                          compile + run the default test (mlp_iris_test)
#   make run TEST=mlp_single_test IMG_IDX=7
#   make regress                  all tests, then a PASS/FAIL table
#   make cov                      merge coverage -> urgReport/dashboard.html
#   make sat_vectors              regenerate data/sat_cfg.txt + sat_vectors.txt
#   make clean
#
# Knobs (case-sensitive: TEST=, not test=):
#   TEST       test name (+UVM_TESTNAME)             default mlp_iris_test
#   SEED       random seed (+ntb_random_seed)        default 1
#   NUM_ITEMS  vectors for random / sparse tests     default 40
#   IMG_IDX    Iris vector for mlp_single_test       default 0   (0..1199)
#   VERB       UVM_NONE|LOW|MEDIUM|HIGH|FULL         default UVM_MEDIUM
#   WAVES=1    dump a .vpd (DVE)                     default 0
#   FSDB=1     dump an .fsdb (Verdi) - needs a rebuild: make clean
#   MON=1      write <TEST>_pins.log, a pin trace    default 0
# -----------------------------------------------------------------------------
TEST      ?= mlp_iris_test
SEED      ?= 1
NUM_ITEMS ?= 40
IMG_IDX   ?= 0
VERB      ?= UVM_MEDIUM
WAVES     ?= 0
FSDB      ?= 0
MON       ?= 0

TESTS := mlp_iris_test mlp_single_test mlp_random_test mlp_sparse_test mlp_corner_test \
         mlp_sat_test mlp_reset_test mlp_cfg_test mlp_stall_test mlp_regress_test

CM_FLAGS := -cm line+cond+fsm+tgl+branch+assert
VCS_FLAGS := -full64 -sverilog -ntb_opts uvm-1.2 -timescale=1ns/1ps -debug_access+all \
             $(CM_FLAGS) -cm_hier cov_hier.cfg -f files.f -top tb_top -o simv -l compile.log
ifeq ($(FSDB),1)
  VCS_FLAGS += -kdb -lca +define+FSDB
endif

PLUSARGS := +UVM_TESTNAME=$(TEST) +ntb_random_seed=$(SEED) +NUM_ITEMS=$(NUM_ITEMS) \
            +IMG_IDX=$(IMG_IDX) +UVM_VERBOSITY=$(VERB)
ifeq ($(WAVES),1)
  PLUSARGS += +VPD
endif
ifeq ($(FSDB),1)
  PLUSARGS += +FSDB
endif
ifeq ($(MON),1)
  PLUSARGS += +MON
endif

.PHONY: all compile run regress cov sat_vectors check clean

all: run

compile: simv
simv: files.f $(wildcard *.sv) $(wildcard *.svh) rtl/mlp_layer.sv data/sat_vectors.txt
	vcs $(VCS_FLAGS)

run: simv
	./simv $(PLUSARGS) $(CM_FLAGS) -cm_name $(TEST)_$(SEED) -l $(TEST)_$(SEED).log
	@echo "---------------- $(TEST) (seed $(SEED)) ----------------"
	@grep -E "TEST PASSED|TEST FAILED|UVM_ERROR :|UVM_FATAL :|functional coverage|Iris classification" $(TEST)_$(SEED).log || true

regress: simv
	@rm -f regress_summary.txt
	@for t in $(TESTS); do \
	   $(MAKE) --no-print-directory run TEST=$$t VERB=UVM_LOW > /dev/null 2>&1; \
	   if grep -q "TEST PASSED" $${t}_$(SEED).log; then echo "PASS  $$t" >> regress_summary.txt; \
	   else echo "FAIL  $$t" >> regress_summary.txt; fi; \
	 done
	@cat regress_summary.txt

cov:
	urg -dir simv.vdb -format both -report urgReport
	@echo "open urgReport/dashboard.html"

data/sat_vectors.txt data/sat_cfg.txt:
	python3 tools/gen_sat_vectors.py data

sat_vectors:
	python3 tools/gen_sat_vectors.py data

check:
	python3 tools/rtl_model_check.py data

clean:
	rm -rf simv simv.daidir csrc simv.vdb urgReport ucli.key DVEfiles novas* *.vpd *.fsdb *.log \
	       regress_summary.txt vc_hdrs.h .vcs* AN.DB
