// Members defined as "Protected" can be accessed by the class itself and by derived classes, but not by other code outside of these classes.

#include <iostream>
using namespace std;
class Base{
    private:
    int a{10};
    public:
    int b=20;
    protected:
    int c=30;
};
class Derived:public Base{
    public:
    void display(){
        cout<< b<<" "<<c<<endl; // OK: 'b' is public and 'c' is protected in 'Base'
    }
};
int main(){
    Base obj;
    //cout<<"Value of a: "<<obj.a<<endl; Error: 'a' is private in 'Base'
    cout<<"Value of b: "<<obj.b<<endl; // OK: 'b' is public in 'Base'
    //cout<<"Value of c: "<<obj.c<<endl; // Error: 'c' is protected in 'Base'
    Derived obj2;
    obj2.display();
    return 0;
}