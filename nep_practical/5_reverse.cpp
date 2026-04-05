#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int r = 0;
    while (n != 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    cout << "Reverse: " << r;
    return 0;
}
