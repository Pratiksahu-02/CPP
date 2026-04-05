#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int t = a;
    a = b;
    b = t;
    cout << "After swap: " << a << " " << b;
    return 0;
}
