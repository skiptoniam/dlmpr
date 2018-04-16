// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// barrier_to_dispersal
bool barrier_to_dispersal(int snkX, int snkY, int srcX, int srcY, NumericMatrix barriers_map, int barrier_type);
RcppExport SEXP _steps_barrier_to_dispersal(SEXP snkXSEXP, SEXP snkYSEXP, SEXP srcXSEXP, SEXP srcYSEXP, SEXP barriers_mapSEXP, SEXP barrier_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type snkX(snkXSEXP);
    Rcpp::traits::input_parameter< int >::type snkY(snkYSEXP);
    Rcpp::traits::input_parameter< int >::type srcX(srcXSEXP);
    Rcpp::traits::input_parameter< int >::type srcY(srcYSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type barriers_map(barriers_mapSEXP);
    Rcpp::traits::input_parameter< int >::type barrier_type(barrier_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(barrier_to_dispersal(snkX, snkY, srcX, srcY, barriers_map, barrier_type));
    return rcpp_result_gen;
END_RCPP
}
// can_source_cell_disperse
IntegerVector can_source_cell_disperse(int i, int j, NumericMatrix carrying_capacity_available, NumericMatrix tracking_population_state, NumericMatrix habitat_suitability_map, NumericMatrix barriers_map, bool use_barrier, int barrier_type, int loopID, int dispersal_distance, NumericVector dispersal_kernel);
RcppExport SEXP _steps_can_source_cell_disperse(SEXP iSEXP, SEXP jSEXP, SEXP carrying_capacity_availableSEXP, SEXP tracking_population_stateSEXP, SEXP habitat_suitability_mapSEXP, SEXP barriers_mapSEXP, SEXP use_barrierSEXP, SEXP barrier_typeSEXP, SEXP loopIDSEXP, SEXP dispersal_distanceSEXP, SEXP dispersal_kernelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type carrying_capacity_available(carrying_capacity_availableSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type tracking_population_state(tracking_population_stateSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type habitat_suitability_map(habitat_suitability_mapSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type barriers_map(barriers_mapSEXP);
    Rcpp::traits::input_parameter< bool >::type use_barrier(use_barrierSEXP);
    Rcpp::traits::input_parameter< int >::type barrier_type(barrier_typeSEXP);
    Rcpp::traits::input_parameter< int >::type loopID(loopIDSEXP);
    Rcpp::traits::input_parameter< int >::type dispersal_distance(dispersal_distanceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dispersal_kernel(dispersal_kernelSEXP);
    rcpp_result_gen = Rcpp::wrap(can_source_cell_disperse(i, j, carrying_capacity_available, tracking_population_state, habitat_suitability_map, barriers_map, use_barrier, barrier_type, loopID, dispersal_distance, dispersal_kernel));
    return rcpp_result_gen;
END_RCPP
}
// clean_matrix
NumericMatrix clean_matrix(NumericMatrix in_matrix, NumericMatrix barriers_map, bool filter_na_data, bool filter_barriers, bool insert_na_data);
RcppExport SEXP _steps_clean_matrix(SEXP in_matrixSEXP, SEXP barriers_mapSEXP, SEXP filter_na_dataSEXP, SEXP filter_barriersSEXP, SEXP insert_na_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type in_matrix(in_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type barriers_map(barriers_mapSEXP);
    Rcpp::traits::input_parameter< bool >::type filter_na_data(filter_na_dataSEXP);
    Rcpp::traits::input_parameter< bool >::type filter_barriers(filter_barriersSEXP);
    Rcpp::traits::input_parameter< bool >::type insert_na_data(insert_na_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(clean_matrix(in_matrix, barriers_map, filter_na_data, filter_barriers, insert_na_data));
    return rcpp_result_gen;
END_RCPP
}
// proportion_of_population_to_disperse
int proportion_of_population_to_disperse(int source_x, int source_y, int sink_x, int sink_y, NumericMatrix starting_population_state, NumericMatrix current_carrying_capacity, double dispersal_proportion);
RcppExport SEXP _steps_proportion_of_population_to_disperse(SEXP source_xSEXP, SEXP source_ySEXP, SEXP sink_xSEXP, SEXP sink_ySEXP, SEXP starting_population_stateSEXP, SEXP current_carrying_capacitySEXP, SEXP dispersal_proportionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type source_x(source_xSEXP);
    Rcpp::traits::input_parameter< int >::type source_y(source_ySEXP);
    Rcpp::traits::input_parameter< int >::type sink_x(sink_xSEXP);
    Rcpp::traits::input_parameter< int >::type sink_y(sink_ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type starting_population_state(starting_population_stateSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type current_carrying_capacity(current_carrying_capacitySEXP);
    Rcpp::traits::input_parameter< double >::type dispersal_proportion(dispersal_proportionSEXP);
    rcpp_result_gen = Rcpp::wrap(proportion_of_population_to_disperse(source_x, source_y, sink_x, sink_y, starting_population_state, current_carrying_capacity, dispersal_proportion));
    return rcpp_result_gen;
END_RCPP
}
// na_matrix
NumericMatrix na_matrix(int nr, int nc);
RcppExport SEXP _steps_na_matrix(SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    rcpp_result_gen = Rcpp::wrap(na_matrix(nr, nc));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_dispersal
List rcpp_dispersal(NumericMatrix starting_population_state, NumericMatrix potential_carrying_capacity, NumericMatrix habitat_suitability_map, NumericMatrix barriers_map, int barrier_type, bool use_barrier, int dispersal_steps, int dispersal_distance, NumericVector dispersal_kernel, double dispersal_proportion);
RcppExport SEXP _steps_rcpp_dispersal(SEXP starting_population_stateSEXP, SEXP potential_carrying_capacitySEXP, SEXP habitat_suitability_mapSEXP, SEXP barriers_mapSEXP, SEXP barrier_typeSEXP, SEXP use_barrierSEXP, SEXP dispersal_stepsSEXP, SEXP dispersal_distanceSEXP, SEXP dispersal_kernelSEXP, SEXP dispersal_proportionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type starting_population_state(starting_population_stateSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type potential_carrying_capacity(potential_carrying_capacitySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type habitat_suitability_map(habitat_suitability_mapSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type barriers_map(barriers_mapSEXP);
    Rcpp::traits::input_parameter< int >::type barrier_type(barrier_typeSEXP);
    Rcpp::traits::input_parameter< bool >::type use_barrier(use_barrierSEXP);
    Rcpp::traits::input_parameter< int >::type dispersal_steps(dispersal_stepsSEXP);
    Rcpp::traits::input_parameter< int >::type dispersal_distance(dispersal_distanceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dispersal_kernel(dispersal_kernelSEXP);
    Rcpp::traits::input_parameter< double >::type dispersal_proportion(dispersal_proportionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_dispersal(starting_population_state, potential_carrying_capacity, habitat_suitability_map, barriers_map, barrier_type, use_barrier, dispersal_steps, dispersal_distance, dispersal_kernel, dispersal_proportion));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_steps_barrier_to_dispersal", (DL_FUNC) &_steps_barrier_to_dispersal, 6},
    {"_steps_can_source_cell_disperse", (DL_FUNC) &_steps_can_source_cell_disperse, 11},
    {"_steps_clean_matrix", (DL_FUNC) &_steps_clean_matrix, 5},
    {"_steps_proportion_of_population_to_disperse", (DL_FUNC) &_steps_proportion_of_population_to_disperse, 7},
    {"_steps_na_matrix", (DL_FUNC) &_steps_na_matrix, 2},
    {"_steps_rcpp_dispersal", (DL_FUNC) &_steps_rcpp_dispersal, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_steps(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
