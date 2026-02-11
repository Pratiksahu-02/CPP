// In pass by reference method, instead of passing  the value of a variable to a function, we pass the reference (or address) of the variable.
// This allows the function to modify the original variable directly, as it has access to the memory location of the variable.

#include <iostream>
using namespace std;
void changeValue(int &x) { // Pass by reference using '&'
    x = x + 10; // This change will affect the original variable
}
int main() {
    int num = 5;
    cout << "Original value: " << num << endl; // Output: 5

    changeValue(num); // Pass the variable by reference
    cout << "Value after function call: " << num << endl; // Output: 15 (original value is changed)

    return 0;
}
/* why changing?
 A: Pass by reference is more efficient than pass by value because it avoids copying the entire variable.
 It also allows the function to modify the original variable directly, which is not possible with pass by value.
  Additionally, it's more readable and easier to understand than pass by pointer.*/