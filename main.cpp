#include <iostream>
#include "numerical_methods.h"

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n===== Numerical Methods Toolkit (C++) =====\n";
        cout << "1. Newton-Raphson (solve x^2 - 2 = 0)\n";
        cout << "2. Bisection Method (solve x^2 - 2 = 0)\n";
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
                int max_iter;

                cout << "Enter interval [a, b]\n";
                cout << "Hint: Choose a and b such that f(a) and f(b) have opposite signs.\n";
                cout << "Example: a = 1, b = 2\n";

                cin >> a >> b;

                cout << "f(a) = " << f(a) << ", f(b) = " << f(b) << endl;

                cout << "Tolerance: ";
                cin >> tol;

                cout << "Max iterations: ";
                cin >> max_iter;

                double result = bisection(a, b, tol, max_iter);

                if (result != -1) {
                    cout << "Result ≈ " << result << endl;
                }
                break;
            }

            case 3: {
                double a, b;
                int n;

                cout << "Integrate sin(x) from a to b\n";
                cout << "a: ";
                cin >> a;
                cout << "b: ";
                cin >> b;
                cout << "n (intervals): ";
                cin >> n;

                double result = trapezoidal(a, b, n);
                cout << "Result ≈ " << result << endl;
                break;
            }

            case 4: {
                double a, b;
                int n;

                cout << "Integrate sin(x) from a to b\n";
                cout << "a: ";
                cin >> a;
                cout << "b: ";
                cin >> b;
                cout << "n (even number): ";
                cin >> n;

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
