% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{demmlerReinsch}
\alias{demmlerReinsch}
\title{Transform degrees of freedom to lambda}
\usage{
demmlerReinsch(XtX, penalty_mat, degrees_of_freedom)
}
\arguments{
\item{XtX}{[\code{matrix}]\cr
Square matrix calculated by $X^TW^TWX$, where $X$ is the design matrix, and
$W$ the diagonal matrix where the diagonal includes the weights.}

\item{penalty_mat}{[\code{matrix}]\cr
Penalization matrix used for model fitting.}

\item{degrees_of_freedom}{[\code{numeric(1)}]\cr
Degrees of freedom to convert to the penalty term.}
}
\value{
\code{numeric(1)} Penalty term which corresponds to the given degrees of freedom.
}
\description{
This function calculates the Demmler-Reinsch-Orthogonalization to translate
the degrees of freedom to a penalty term.
}
\examples{
X = cbind(1, iris$Petal.Length, iris$Sepal.Length)
weights = rep(1, nrow(iris))
pen = penaltyMat(ncol(X), 2)
XtX = t(X) \%*\% t(diag(weights)) \%*\% diag(weights) \%*\% X

demmlerReinsch(XtX, pen, 2)
}
