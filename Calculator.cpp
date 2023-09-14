#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;

    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the operation (+, -, *, /)
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    // Perform the selected operation and display the result
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }

    return 0;
}
