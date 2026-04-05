#include <iostream>
using namespace std;
class A {
public:
    static int s;
    int n;
};
int A::s = 0;
int main() {
    A a1, a2;
    a1.n = 5;
    a2.n = 7;
    A::s = 9;
    cout << a1.n << " " << a2.n << " " << A::s;
    return 0;
}
