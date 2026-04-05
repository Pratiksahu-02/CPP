#include <iostream>
#include <string>
using namespace std;
class S {
public:
    string s;
    S(string t = ""): s(t) {}
    friend S operator+(const S &a, const S &b) {
        return S(a.s + b.s);
    }
};
int main() {
    string a, b;
    cin >> a >> b;
    S x(a), y(b);
    S z = x + y;
    cout << z.s;
    return 0;
}
