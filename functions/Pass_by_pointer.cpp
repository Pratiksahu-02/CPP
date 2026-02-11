// In pass by pointer method, instead of passing the value of a variable to a function, we pass the address (pointer) of the variable.
// This allows the function to modify the original variable directly, as it has access to the memory location of the variable.

#include <iostream>
using namespace std;
void changeValue(int *x) { // Pass by pointer using '*'
    *x = *x + 10; // This change will affect the original variable
}
int main() {
    int num = 5;
    cout << "Original value: " << num << endl; // Output: 5

    changeValue(&num); // Pass the variable by pointer (address)
    cout << "Value after function call: " << num << endl; // Output: 15 (original value is changed)

    return 0;
}

/* why changing?
 A: Pass by pointer is more efficient than pass by value because it avoids copying the entire variable.
 It also allows the function to modify the original variable directly, which is not possible with pass by value.
  However, it can be less readable and more error-prone than pass by reference, as it requires explicit dereferencing and can lead to null pointer issues if not handled carefully.*/