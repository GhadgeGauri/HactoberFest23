#include <iostream>

int main() {
    // Declare variables to store the numbers
    int num1, num2, sum;

    // Get input from the user
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Add the two numbers
    sum = num1 + num2;

    // Display the result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
