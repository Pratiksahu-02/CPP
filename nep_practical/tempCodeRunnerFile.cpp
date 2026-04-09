#include <iostream>
using namespace std;
double area(int r)
{
    return 3.14 * r * r;
}
double area(int b, int h)
{
    return (double)b * h / 2;
}
double area(double l, double w)
{
    return l * w;
}
int main()
{
    int a, b, c, d;
    cout << "Enter radius: ";
    cin >> a;
    cout << "Enter base: ";
    cin >> b;
    cout << "Enter height/breath: ";
    cin >> c;
    cout << "Enter length: ";
    cin >> d;
    cout << "Circle: " << area(a) << " Triangle: " << area(b, c) << " Rectangle: " << area(d, c) << endl;
    return 0;
}
