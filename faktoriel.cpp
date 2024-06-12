#include <iostream>

using namespace std;

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void menu() {
    cout << "Choose a function to run:" << endl;
    cout << "1. Power" << endl;
    cout << "2. Factorial" << endl;
    cout << "3. Fibonacci" << endl;
}

int main() {
    int choice;
    menu();
    cin >> choice;

    switch (choice) {
        case 1: {
            int base, exponent;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter exponent: ";
            cin >> exponent;
            cout << "Result: " << power(base, exponent) << endl;
            break;
        }
        case 2: {
            int n;
            cout << "Enter a number to find its factorial: ";
            cin >> n;
            cout << "Result: " << factorial(n) << endl;
            break;
        }
        case 3: {
            int n;
            cout << "Enter a number to find the Fibonacci sequence up to that number: ";
            cin >> n;
            cout << "Fibonacci sequence: ";
            for (int i = 0; i < n; i++) {
                cout << fibonacci(i) << " ";
            }
            cout << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}