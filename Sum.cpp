#include <iostream>
using namespace std;


// Function to calculate the sum of two numbers
int Sum(int num1, int num2) {
    return num1 + num2;
}

int main() {

    int num1, num2, result;

   
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Call the  function
    result = Sum(num1, num2);

   
    cout << "Sum: " << result << endl;

    return 0;
}
