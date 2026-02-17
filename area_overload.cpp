#include <iostream>
using namespace std;

int area(int l,int b)
{
    cout<<"Area of rectangle is "<<l*b<<endl;
    return 0;
}
int area(int s)
{
    cout<<"Area of square is "<<s*s<<endl;
    return 0;
}

float area(float r)
{
    cout<<"Area of circle is "<<3.14*r*r<<endl;
    return 0;
}
float area(float l,float b)
{
    cout<<"Area of triangle is "<<0.5*l*b<<endl;
    return 0;
}

int main()
{
    area(5,10);
    area(5);
    area(5.0f);
    area(5.0f,10.0f);
    return 0;
}