#include <iostream>
using namespace std;
class number
{
    int n;

public:
    number(int x)
    {
        n = x;
    }
    void operator++()
    {
        n = n + 1;
    }
    void display()
    {
        cout << "value:" << n << endl;
    }
};
int main()
{
    number n1(5);
    n1.display();
    ++n1;
    n1.display();
    return 0;
}

// output:
//  value:5
//  value:6