#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    int option;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\nSelect the operation you want to perform:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Choice: ";
    cin >> option;

    switch(option) {

        case 1:
            cout << "\nOperation: Addition\n";
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case 2:
            cout << "\nOperation: Subtraction\n";
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case 3:
            cout << "\nOperation: Multiplication\n";
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case 4:
            if (num2 == 0) {
                cout << "\nError: Division by zero is not allowed.";
            } else {
                cout << "\nOperation: Division\n";
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2;
            }
            break;

        default:
            cout << "\nInvalid option. Please select a valid operation.";
    }

    return 0;
}