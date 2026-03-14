#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex c)
    {
        complex temp(0, 0);
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    complex c1(2, 3);
    complex c2(4, 5);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}

// output:
//  6+8i