#include <ctime>
#include "tree.h"
#include "forest.h"
#include <chrono>
#include "model.h"
#include "xbcf_model.h"
#include "node_data.h"
#include "state.h"
#include "cdf.h"
#include "X_struct.h"
#include "MH.h"

void mcmc_loop_xbcf(matrix<size_t> &Xorder_std, bool verbose,
                    matrix<double> &sigma_draw_xinfo_ps,
                    matrix<double> &sigma_draw_xinfo_trt,
                    vector<vector<tree>> &trees_ps,
                    vector<vector<tree>> &trees_trt,
                    double no_split_penality,
                    std::unique_ptr<State> &state_ps,
                    std::unique_ptr<State> &state_trt,
                    NormalModel *model_ps,
                    xbcfModel *model_trt,
                    std::unique_ptr<X_struct> &x_struct_ps,
                    std::unique_ptr<X_struct> &x_struct_trt);