#include <iostream>
using namespace std;
inline int sq(int x) { return x * x; }
inline int cb(int x) { return x * x * x; }
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << sq(n) << " " << cb(n);
    return 0;
}
