#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "SIMPLE CALCULATOR" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero." << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1; // Exit with an error code
    }

    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}

