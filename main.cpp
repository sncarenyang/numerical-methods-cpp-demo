%%writefile main.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

double newton_raphson(double x0, double tol = 1e-6, int max_iter = 100) {
    auto f = [](double x) { return x * x - 2; };  // Solve x^2 = 2
    auto df = [](double x) { return 2 * x; };
    double x = x0;
    for (int i = 0; i < max_iter; ++i) {
        double fx = f(x), dfx = df(x);
        if (std::abs(fx) < tol) return x;
        x -= fx / dfx;
    }
    return x;
}

double trapezoidal_integral(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (sin(a) + sin(b));  // Integrate sin(x)
    for (int i = 1; i < n; ++i) sum += sin(a + i * h);
    return h * sum;
}

int main() {
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Newton-Raphson root: " << newton_raphson(1.0) << std::endl;  // ~1.414213
    std::cout << "Trapezoidal integral (0 to pi, n=100): " << trapezoidal_integral(0, M_PI, 100) << std::endl;  // ~2.0
    return 0;
}

