#include <iostream>
using namespace std;

//function to add two numbers
int Sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    // Declare variables to store the numbers
    int num1, num2, result;

    // Get input from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Add the two numbers
    int result=Sum(num1,num2);

    // Display the result
    cout << "Sum: " << result<< endl;

    return 0;
}
