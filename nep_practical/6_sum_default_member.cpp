#include <iostream>
using namespace std;
class A {
public:
    int sum(int a, int b, int c = 0, int d = 0) {
        return a + b + c + d;
    }
};
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    A x;
    cout << x.sum(a, b, c, d);
    return 0;
}
