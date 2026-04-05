#include <iostream>
using namespace std;
class C {
public:
    int r, i;
    C(int x = 0, int y = 0): r(x), i(y) {}
    C operator+(const C &b) const {
        return C(r + b.r, i + b.i);
    }
};
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    C x(a, b), y(c, d);
    C z = x + y;
    cout << z.r << "+" << z.i << "i";
    return 0;
}
