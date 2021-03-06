% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{findSpan}
\alias{findSpan}
\title{Binary search to find index of given point within knots}
\usage{
findSpan(x, knots)
}
\arguments{
\item{x}{[\code{numeric(1)}]\cr 
Point to search for position in knots.}

\item{knots}{[\code{numeric}]\cr 
Vector of knots. It's the users responsibility to pass a sorted vector.}
}
\value{
Index of position of \code{x} in `knots`.
}
\description{
This small functions search for the position of `x` within the
`knots` and returns the smalles index for which x >= knots[i].
}
\details{
Note that this function returns the `C++` index which starts 
with `0` and ends with `n-1`.
}
\examples{
knots = 1:10
findSpan(1, knots)
findSpan(2.5, knots)
findSpan(9.5, knots)
findSpan(10, knots)
}
