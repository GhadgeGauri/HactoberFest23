#include <iostream>
#include <string>
using namespace std;
//Created addTwoNumbers function to add 2 number

string addTwoNumbers(string num1, string num2) {
    int carry = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    string result = "";

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? num1[i] - '0' : 0;
        int y = (j >= 0) ? num2[j] - '0' : 0;
        int sum = x + y + carry;
        carry = sum / 10;
        result = to_string(sum % 10) + result;

        i--;
        j--;
    }

    return result;
}

int main() {
    string num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    string sum = addTwoNumbers(num1, num2);

    cout << "Sum: " << sum << endl;

    return 0;
}
