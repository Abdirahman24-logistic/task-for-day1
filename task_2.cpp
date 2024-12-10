#include <iostream>
#include <cmath> // For the pow() function

using namespace std;

// Function declarations
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);
double power(double base, double exponent);

int main() {
    double num1, num2, result;
    int choice;

    // User inputs two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Menu for selecting operation
    cout << "\nSelect operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Power (num1^num2)\n";
    cout << "Enter choice (1/2/3/4/5): ";
    cin >> choice;

    // Perform operation based on user's choice using if/else
    if (choice == 1) {
        result = add(num1, num2);
        cout << "Result: " << result << endl;
    } 
    else if (choice == 2) {
        result = subtract(num1, num2);
        cout << "Result: " << result << endl;
    } 
    else if (choice == 3) {
        result = multiply(num1, num2);
        cout << "Result: " << result << endl;
    } 
    else if (choice == 4) {
        if (num2 != 0) {
            result = divide(num1, num2);
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } 
    else if (choice == 5) {
        result = power(num1, num2);
        cout << "Result: " << result << endl;
    } 
    else {
        cout << "Invalid input. Please select a valid operation." << endl;
    }

    return 0;
}

// Function definitions
double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}

double power(double base, double exponent) {
    return pow(base, exponent); // Using the pow function from cmath
}