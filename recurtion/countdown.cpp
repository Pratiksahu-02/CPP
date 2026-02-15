#include <iostream>
using namespace std;

void countdown(int n)
{
    if(n<0)
        return;
    cout<<n<<" ";
    countdown(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Countdown from "<<n<<" is: ";
    countdown(n);
    cout<<endl;
    return 0;
}