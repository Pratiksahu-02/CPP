#include <iostream>
using namespace std;
class A {
public:
    int v;
    A(int n): v(n) {}
    A operator++() {
        ++v;
        return *this;
    }
};
int main() {
    int n;
    cin >> n;
    A x(n);
    ++x;
    cout << x.v;
    return 0;
}
