#include <iostream>
using namespace std;
class A {
public:
    int v;
    A(int n): v(n) {}
    friend A operator++(A &x);
};
A operator++(A &x) {
    x.v++;
    return x;
}
int main() {
    int n;
    cin >> n;
    A x(n);
    ++x;
    cout << x.v;
    return 0;
}
