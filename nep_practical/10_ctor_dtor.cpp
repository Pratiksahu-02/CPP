#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "Constructor called\n"; }
    ~A() { cout << "Destructor called\n"; }
};
int main()
{
    cout << "Creating object\n";
    A x;
    cout << "Object created\n";
    return 0;
}
