// In pass by value method,a variable is passed to a function as an argument, 
// and a copy of the variable is created in the function's scope.
//  Any changes made to the variable inside the function do not affect the original variable outside the function.

#include <iostream>
using namespace std;

int changeValue(int x) {
    x = x + 10; // This change will not affect the original variable
    return x;
}

int main() {
    int num = 5;
    cout << "Original value: " << num << endl; // Output: 5

    int newValue = changeValue(num);
    cout << "Value returned from function: " << newValue << endl; // Output: 15
    cout << "Value after function call: " << num << endl; // Output: 5 (original value remains unchanged)

    return 0;
}