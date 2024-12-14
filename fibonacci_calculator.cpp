#include <iostream>

// Function overloading
int add(int a, int b) {
    return a + b;
}

double add(double a, double b, double c = 0) { // Default argument
    return a + b + c;
}

int main() {
    int num1 = 10, num2 = 20;
    double num3 = 30.5, num4 = 40.5;

    // Lambda function for computation
    auto multiply = [](auto x, auto y) { return x * y; };

    std::cout << "Sum of integers: " << add(num1, num2) << std::endl;
    std::cout << "Sum of doubles with default argument: " << add(num3, num4) << std::endl;
    std::cout << "Product using lambda function: " << multiply(num1, num2) << std::endl;

    return 0;
}