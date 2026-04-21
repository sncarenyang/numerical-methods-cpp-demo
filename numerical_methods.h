#ifndef NUMERICAL_METHODS_H
#define NUMERICAL_METHODS_H

double f(double x);
double df(double x);

double newton(double x0, double tol, int max_iter);
double bisection(double a, double b, double tol, int max_iter);

double trapezoidal(double a, double b, int n);
double simpson(double a, double b, int n);

#endif
