#include <iostream>
using namespace std;
class A
{
public:
    int v;
    A(int n) : v(n) {}
    A operator++()
    {
        ++v;
        return *this;
    }
};
int main()
{
    int n;
    cout << "Enter a value: ";
    cin >> n;
    A x(n);
    ++x;
    cout << "After increment: " << x.v;
    return 0;
}
