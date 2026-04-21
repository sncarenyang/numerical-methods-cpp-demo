#include <iostream>
#include <cmath>
#include "numerical_methods.h"

using namespace std;

// =========================
// Function definitions
// =========================
double f(double x) {
    return x * x - 2;
}

double df(double x) {
    return 2 * x;
}

// =========================
// Newton-Raphson
// =========================
double newton(double x0, double tol, int max_iter) {
    double x = x0;

    for (int i = 0; i < max_iter; i++) {
        double x_new = x - f(x) / df(x);

        if (fabs(x_new - x) < tol) {
            cout << "Converged in " << i << " iterations\n";
            return x_new;
        }

        x = x_new;
    }

    cout << "Max iterations reached.\n";
    return x;
}

// =========================
// Bisection Method
// =========================
double bisection(double a, double b, double tol, int max_iter) {
    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval: f(a) and f(b) must have opposite signs.\n";
        return -1;
    }

    double c;

    for (int i = 0; i < max_iter; i++) {
        c = (a + b) / 2;

        if (fabs(f(c)) < tol || (b - a) / 2 < tol) {
            cout << "Converged in " << i << " iterations\n";
            return c;
        }

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << "Max iterations reached.\n";
    return (a + b) / 2;
}

// =========================
// Trapezoidal Rule
// =========================
double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = (sin(a) + sin(b)) / 2.0;

    for (int i = 1; i < n; i++) {
        sum += sin(a + i * h);
    }

    return sum * h;
}

// =========================
// Simpson's Rule
// =========================
double simpson(double a, double b, int n) {
    if (n % 2 != 0) {
        n++;
    }

    double h = (b - a) / n;
    double sum = sin(a) + sin(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += (i % 2 == 0 ? 2 : 4) * sin(x);
    }

    return sum * h / 3;
}
