// -----------------------------------------------------------------------------
// mlp_dataset.sv : reads a config file + a vector file from data/
//
//   cfg file     : one "addr data" pair per line  (decimal)
//   vector file  : "x0 x1 x2 x3  y0 y1 y2 y3  label"  (decimal, int8)
//                  y = golden scores computed by the Python model,
//                  label = Iris species 0/1/2 (-1 when not an Iris vector)
//
// It also builds a reference model holding that config, so the scoreboard can
// tell whether the DUT is currently configured for the dataset.
// -----------------------------------------------------------------------------
class mlp_dataset extends uvm_object;
  `uvm_object_utils(mlp_dataset)

  bit [31:0]       xp[$];                 // packed {x3,x2,x1,x0}
  bit [31:0]       yp[$];                 // packed golden scores
  int              label[$];
  int              cfg_addr[$];
  int              cfg_data[$];
  int              test_n = 0;            // how many vectors the "test" run uses
  mlp_ref_model    cfg_model;             // model holding this dataset's config

  int              lab_of [bit [31:0]];   // x vector -> label
  bit [31:0]       y_of   [bit [31:0]];   // x vector -> golden scores

  function new(string name = "mlp_dataset");
    super.new(name);
    cfg_model = new("cfg_model");
  endfunction

  function int size();
    return xp.size();
  endfunction

  function bit load_cfg(string path);
    int fd, code, a, d;
    fd = $fopen(path, "r");
    if (fd == 0) return 0;
    while (1) begin
      code = $fscanf(fd, "%d %d", a, d);
      if (code != 2) break;
      cfg_addr.push_back(a);
      cfg_data.push_back(d);
      void'(cfg_model.write(a[4:0], d[7:0], 1'b0));
    end
    $fclose(fd);
    return (cfg_addr.size() > 0);
  endfunction

  function bit load_vectors(string path);
    int fd, code, x0, x1, x2, x3, y0, y1, y2, y3, lab;
    fd = $fopen(path, "r");
    if (fd == 0) return 0;
    while (1) begin
      code = $fscanf(fd, "%d %d %d %d %d %d %d %d %d", x0, x1, x2, x3, y0, y1, y2, y3, lab);
      if (code != 9) break;
      xp.push_back(pack_x(x0, x1, x2, x3));
      yp.push_back(pack_x(y0, y1, y2, y3));
      label.push_back(lab);
      lab_of[xp[$]] = lab;
      y_of  [xp[$]] = yp[$];
    end
    $fclose(fd);
    test_n = xp.size();
    return (xp.size() > 0);
  endfunction

  // Is this x vector in the dataset?  Gives its label and golden scores.
  function bit lookup(bit [31:0] p, output int lab, output bit [31:0] yg);
    if (!lab_of.exists(p)) return 0;
    lab = lab_of[p];
    yg  = y_of[p];
    return 1;
  endfunction

  // Does the model hold exactly this dataset's configuration?
  function bit cfg_equals(mlp_ref_model m);
    return cfg_addr.size() > 0 && m.same_cfg(cfg_model);
  endfunction
endclass
