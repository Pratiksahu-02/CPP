#include <iostream>
using namespace std;
class A
{
private:
    static void f()
    {
        cout << "Private function called";
    }

public:
    static void run()
    {
        f();
    }
};
int main()
{
    cout << "Output: ";
    A::run();
    return 0;
}
