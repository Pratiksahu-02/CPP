#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 3;
    cout << "The cube of " << num << " is: " << cube(num) << endl;
    cout << "The square of " << num << " is: " << square(num) << endl;
    return 0;
}