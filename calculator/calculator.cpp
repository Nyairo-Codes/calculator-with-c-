#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare variables
    string operations;
    double number1, number2;

    // Get user input
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operations;

    cout << "Enter the second number: ";
    cin >> number2;

    // Perform the operation
    if (operations == "+") {
        cout << number1 + number2 << endl;
    } else if (operations == "-") {
        cout << number1 - number2 << endl;
    } else if (operations == "*") {
        cout << number1 * number2 << endl;
    } else if (operations == "/") {
        if (number2 == 0) {
            cout << "Error: Division by zero" << endl;
        } else {
            cout << number1 / number2 << endl;
        }
    } else {
        cout << "Not a recognized operation" << endl;
    }

    return 0;
}
