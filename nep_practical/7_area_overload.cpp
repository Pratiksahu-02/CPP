#include <iostream>
using namespace std;
int area(int r)
{
    return 3.14 * r * r;
}
int area(int b, int h)
{
    return b * h / 2;
}
int area(int l, int w, bool)
{
    return l * w;
}
int main()
{
    int a, b, c, d;
    cout << "Enter values: ";
    cin >> a >> b >> c >> d;
    cout << "Circle: " << area(a) << " Triangle: " << area(b, c) << " Rectangle: " << area(c, d, true);
    return 0;
}
