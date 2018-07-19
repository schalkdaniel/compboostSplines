// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// penaltyMat
arma::mat penaltyMat(const unsigned int& nparams, const unsigned int& differences);
RcppExport SEXP _compboostSplines_penaltyMat(SEXP nparamsSEXP, SEXP differencesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int& >::type nparams(nparamsSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type differences(differencesSEXP);
    rcpp_result_gen = Rcpp::wrap(penaltyMat(nparams, differences));
    return rcpp_result_gen;
END_RCPP
}
// findSpan
unsigned int findSpan(const double& x, const arma::vec& knots);
RcppExport SEXP _compboostSplines_findSpan(SEXP xSEXP, SEXP knotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type knots(knotsSEXP);
    rcpp_result_gen = Rcpp::wrap(findSpan(x, knots));
    return rcpp_result_gen;
END_RCPP
}
// createKnots
arma::vec createKnots(const arma::vec& values, const unsigned int& n_knots, const unsigned int& degree);
RcppExport SEXP _compboostSplines_createKnots(SEXP valuesSEXP, SEXP n_knotsSEXP, SEXP degreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type n_knots(n_knotsSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type degree(degreeSEXP);
    rcpp_result_gen = Rcpp::wrap(createKnots(values, n_knots, degree));
    return rcpp_result_gen;
END_RCPP
}
// createSplineBasis
arma::mat createSplineBasis(const arma::vec& values, const unsigned int& degree, const arma::vec& knots);
RcppExport SEXP _compboostSplines_createSplineBasis(SEXP valuesSEXP, SEXP degreeSEXP, SEXP knotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type degree(degreeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type knots(knotsSEXP);
    rcpp_result_gen = Rcpp::wrap(createSplineBasis(values, degree, knots));
    return rcpp_result_gen;
END_RCPP
}
// createSparseSplineBasis
arma::sp_mat createSparseSplineBasis(arma::vec& values, const unsigned int& degree, const arma::vec& knots);
RcppExport SEXP _compboostSplines_createSparseSplineBasis(SEXP valuesSEXP, SEXP degreeSEXP, SEXP knotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type degree(degreeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type knots(knotsSEXP);
    rcpp_result_gen = Rcpp::wrap(createSparseSplineBasis(values, degree, knots));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _compboostSplines_createBasis(SEXP, SEXP, SEXP);
RcppExport SEXP _compboostSplines_createSparseBasis(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_compboostSplines_penaltyMat", (DL_FUNC) &_compboostSplines_penaltyMat, 2},
    {"_compboostSplines_findSpan", (DL_FUNC) &_compboostSplines_findSpan, 2},
    {"_compboostSplines_createKnots", (DL_FUNC) &_compboostSplines_createKnots, 3},
    {"_compboostSplines_createSplineBasis", (DL_FUNC) &_compboostSplines_createSplineBasis, 3},
    {"_compboostSplines_createSparseSplineBasis", (DL_FUNC) &_compboostSplines_createSparseSplineBasis, 3},
    {"_compboostSplines_createBasis",       (DL_FUNC) &_compboostSplines_createBasis,       3},
    {"_compboostSplines_createSparseBasis", (DL_FUNC) &_compboostSplines_createSparseBasis, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_compboostSplines(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
