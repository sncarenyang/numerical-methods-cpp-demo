%%writefile new_main.cpp
#include <iostream>
#include <cmath>
using namespace std;

// =========================
// 測試函數
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
        if (fabs(x_new - x) < tol) return x_new;
        x = x_new;
    }
    return x;
}

// =========================
// Bisection
// =========================
double bisection(double a, double b, double tol) {
    double c;
    while ((b - a) / 2 > tol) {
        c = (a + b) / 2;
        if (f(c) == 0.0) return c;
        else if (f(a) * f(c) < 0) b = c;
        else a = c;
    }
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
    if (n % 2 != 0) n++; // 必須為偶數

    double h = (b - a) / n;
    double sum = sin(a) + sin(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += (i % 2 == 0 ? 2 : 4) * sin(x);
    }
    return sum * h / 3;
}

// =========================
// 主程式
// =========================
int main() {
    int choice;

    do {
        cout << "\n===== Numerical Methods Toolkit =====\n";
        cout << "1. Newton-Raphson (sqrt(2))\n";
        cout << "2. Bisection Method (sqrt(2))\n";
        cout << "3. Trapezoidal Rule (integrate sin(x))\n";
        cout << "4. Simpson's Rule (integrate sin(x))\n";
        cout << "0. Exit\n";
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double x0, tol;
                int max_iter;
                cout << "Initial guess: ";
                cin >> x0;
                cout << "Tolerance: ";
                cin >> tol;
                cout << "Max iterations: ";
                cin >> max_iter;

                double result = newton(x0, tol, max_iter);
                cout << "Result ≈ " << result << endl;
                break;
            }

            case 2: {
                double a, b, tol;
                cout << "Enter interval [a, b]: ";
                cin >> a >> b;
                cout << "Tolerance: ";
                cin >> tol;

                double result = bisection(a, b, tol);
                cout << "Result ≈ " << result << endl;
                break;
            }

            case 3: {
                double a, b;
                int n;
                cout << "Integrate sin(x) from a to b\n";
                cout << "a: "; cin >> a;
                cout << "b: "; cin >> b;
                cout << "n (intervals): "; cin >> n;

                double result = trapezoidal(a, b, n);
                cout << "Result ≈ " << result << endl;
                break;
            }

            case 4: {
                double a, b;
                int n;
                cout << "Integrate sin(x) from a to b\n";
                cout << "a: "; cin >> a;
                cout << "b: "; cin >> b;
                cout << "n (even number): "; cin >> n;

                double result = simpson(a, b, n);
                cout << "Result ≈ " << result << endl;
                break;
            }

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}
