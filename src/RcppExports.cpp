// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// harpSpatial_basic_scores
DataFrame harpSpatial_basic_scores(NumericMatrix obfield, NumericMatrix fcfield);
RcppExport SEXP _harpSpatial_harpSpatial_basic_scores(SEXP obfieldSEXP, SEXP fcfieldSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type obfield(obfieldSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type fcfield(fcfieldSEXP);
    rcpp_result_gen = Rcpp::wrap(harpSpatial_basic_scores(obfield, fcfield));
    return rcpp_result_gen;
END_RCPP
}
// sal_identify_objects
List sal_identify_objects(NumericMatrix indat, double threshold, double maxobj);
RcppExport SEXP _harpSpatial_sal_identify_objects(SEXP indatSEXP, SEXP thresholdSEXP, SEXP maxobjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type indat(indatSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type maxobj(maxobjSEXP);
    rcpp_result_gen = Rcpp::wrap(sal_identify_objects(indat, threshold, maxobj));
    return rcpp_result_gen;
END_RCPP
}
// cumsum2d
NumericMatrix cumsum2d(NumericMatrix indat);
RcppExport SEXP _harpSpatial_cumsum2d(SEXP indatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type indat(indatSEXP);
    rcpp_result_gen = Rcpp::wrap(cumsum2d(indat));
    return rcpp_result_gen;
END_RCPP
}
// cumsum2d_bin
NumericMatrix cumsum2d_bin(NumericMatrix indat, float threshold);
RcppExport SEXP _harpSpatial_cumsum2d_bin(SEXP indatSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type indat(indatSEXP);
    Rcpp::traits::input_parameter< float >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(cumsum2d_bin(indat, threshold));
    return rcpp_result_gen;
END_RCPP
}
// window_mean_from_cumsum
NumericMatrix window_mean_from_cumsum(NumericMatrix indat, int rad);
RcppExport SEXP _harpSpatial_window_mean_from_cumsum(SEXP indatSEXP, SEXP radSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type indat(indatSEXP);
    Rcpp::traits::input_parameter< int >::type rad(radSEXP);
    rcpp_result_gen = Rcpp::wrap(window_mean_from_cumsum(indat, rad));
    return rcpp_result_gen;
END_RCPP
}
// windowMean
NumericMatrix windowMean(NumericMatrix indat, NumericVector radius);
RcppExport SEXP _harpSpatial_windowMean(SEXP indatSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type indat(indatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(windowMean(indat, radius));
    return rcpp_result_gen;
END_RCPP
}
// fss_from_fractions
double fss_from_fractions(NumericMatrix m1, NumericMatrix m2);
RcppExport SEXP _harpSpatial_fss_from_fractions(SEXP m1SEXP, SEXP m2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m2(m2SEXP);
    rcpp_result_gen = Rcpp::wrap(fss_from_fractions(m1, m2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_neighborhood_scores
DataFrame cpp_neighborhood_scores(NumericMatrix fcfield, NumericMatrix obfield, NumericVector thresholds, NumericVector scales, String comparator, bool includeLow, bool includeHigh, String boundaryCondition);
RcppExport SEXP _harpSpatial_cpp_neighborhood_scores(SEXP fcfieldSEXP, SEXP obfieldSEXP, SEXP thresholdsSEXP, SEXP scalesSEXP, SEXP comparatorSEXP, SEXP includeLowSEXP, SEXP includeHighSEXP, SEXP boundaryConditionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type fcfield(fcfieldSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type obfield(obfieldSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< String >::type comparator(comparatorSEXP);
    Rcpp::traits::input_parameter< bool >::type includeLow(includeLowSEXP);
    Rcpp::traits::input_parameter< bool >::type includeHigh(includeHighSEXP);
    Rcpp::traits::input_parameter< String >::type boundaryCondition(boundaryConditionSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_neighborhood_scores(fcfield, obfield, thresholds, scales, comparator, includeLow, includeHigh, boundaryCondition));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ens_fss
DataFrame cpp_ens_fss(List geolistFcst, NumericMatrix geofieldObs, NumericVector threshold, NumericVector scales, String comparator, bool includeLow, bool includeHigh);
RcppExport SEXP _harpSpatial_cpp_ens_fss(SEXP geolistFcstSEXP, SEXP geofieldObsSEXP, SEXP thresholdSEXP, SEXP scalesSEXP, SEXP comparatorSEXP, SEXP includeLowSEXP, SEXP includeHighSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geolistFcst(geolistFcstSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type geofieldObs(geofieldObsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< String >::type comparator(comparatorSEXP);
    Rcpp::traits::input_parameter< bool >::type includeLow(includeLowSEXP);
    Rcpp::traits::input_parameter< bool >::type includeHigh(includeHighSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ens_fss(geolistFcst, geofieldObs, threshold, scales, comparator, includeLow, includeHigh));
    return rcpp_result_gen;
END_RCPP
}
// harpSpatial_neighborhood_scores
DataFrame harpSpatial_neighborhood_scores(NumericMatrix obfield, NumericMatrix fcfield, NumericVector thresholds, NumericVector scales, String comparator, bool includeLow, bool includeHigh, String boundaryCondition);
RcppExport SEXP _harpSpatial_harpSpatial_neighborhood_scores(SEXP obfieldSEXP, SEXP fcfieldSEXP, SEXP thresholdsSEXP, SEXP scalesSEXP, SEXP comparatorSEXP, SEXP includeLowSEXP, SEXP includeHighSEXP, SEXP boundaryConditionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type obfield(obfieldSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type fcfield(fcfieldSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< String >::type comparator(comparatorSEXP);
    Rcpp::traits::input_parameter< bool >::type includeLow(includeLowSEXP);
    Rcpp::traits::input_parameter< bool >::type includeHigh(includeHighSEXP);
    Rcpp::traits::input_parameter< String >::type boundaryCondition(boundaryConditionSEXP);
    rcpp_result_gen = Rcpp::wrap(harpSpatial_neighborhood_scores(obfield, fcfield, thresholds, scales, comparator, includeLow, includeHigh, boundaryCondition));
    return rcpp_result_gen;
END_RCPP
}
// harpSpatial_ens_fss
DataFrame harpSpatial_ens_fss(List geolistFcst, NumericMatrix geofieldObs, NumericVector threshold, NumericVector scales, String comparator, bool includeLow, bool includeHigh);
RcppExport SEXP _harpSpatial_harpSpatial_ens_fss(SEXP geolistFcstSEXP, SEXP geofieldObsSEXP, SEXP thresholdSEXP, SEXP scalesSEXP, SEXP comparatorSEXP, SEXP includeLowSEXP, SEXP includeHighSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geolistFcst(geolistFcstSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type geofieldObs(geofieldObsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< String >::type comparator(comparatorSEXP);
    Rcpp::traits::input_parameter< bool >::type includeLow(includeLowSEXP);
    Rcpp::traits::input_parameter< bool >::type includeHigh(includeHighSEXP);
    rcpp_result_gen = Rcpp::wrap(harpSpatial_ens_fss(geolistFcst, geofieldObs, threshold, scales, comparator, includeLow, includeHigh));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_harpSpatial_harpSpatial_basic_scores", (DL_FUNC) &_harpSpatial_harpSpatial_basic_scores, 2},
    {"_harpSpatial_sal_identify_objects", (DL_FUNC) &_harpSpatial_sal_identify_objects, 3},
    {"_harpSpatial_cumsum2d", (DL_FUNC) &_harpSpatial_cumsum2d, 1},
    {"_harpSpatial_cumsum2d_bin", (DL_FUNC) &_harpSpatial_cumsum2d_bin, 2},
    {"_harpSpatial_window_mean_from_cumsum", (DL_FUNC) &_harpSpatial_window_mean_from_cumsum, 2},
    {"_harpSpatial_windowMean", (DL_FUNC) &_harpSpatial_windowMean, 2},
    {"_harpSpatial_fss_from_fractions", (DL_FUNC) &_harpSpatial_fss_from_fractions, 2},
    {"_harpSpatial_cpp_neighborhood_scores", (DL_FUNC) &_harpSpatial_cpp_neighborhood_scores, 8},
    {"_harpSpatial_cpp_ens_fss", (DL_FUNC) &_harpSpatial_cpp_ens_fss, 7},
    {"_harpSpatial_harpSpatial_neighborhood_scores", (DL_FUNC) &_harpSpatial_harpSpatial_neighborhood_scores, 8},
    {"_harpSpatial_harpSpatial_ens_fss", (DL_FUNC) &_harpSpatial_harpSpatial_ens_fss, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_harpSpatial(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
