// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// grad_ranking_logistic
NumericVector grad_ranking_logistic(NumericVector x, List opts);
RcppExport SEXP apg_grad_ranking_logistic(SEXP xSEXP, SEXP optsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type opts(optsSEXP);
    __result = Rcpp::wrap(grad_ranking_logistic(x, opts));
    return __result;
END_RCPP
}
