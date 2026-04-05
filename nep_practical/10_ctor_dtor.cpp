#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "ctor"; }
    ~A() { cout << "dtor"; }
};
int main() {
    A x;
    return 0;
}
