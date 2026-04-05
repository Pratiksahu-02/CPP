#include <iostream>
using namespace std;
class A {
private:
    static void f() {
        cout << "ok";
    }
public:
    static void run() {
        f();
    }
};
int main() {
    A::run();
    return 0;
}
