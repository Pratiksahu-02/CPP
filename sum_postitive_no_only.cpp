#include <iostream>
using namespace std;
int main() {
    int number;
    int sum = 0;
    cout << "Enter a positive number (or a negative number to stop): ";
    while (cin >> number && number >= 0) {
        sum += number;
        cout << "Enter a positive number (or a negative number to stop): ";
    }
    cout << "The sum of all positive numbers entered is: " << sum << endl;
    return 0;
    
}