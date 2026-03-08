#include <iostream>
using namespace std;

class code{
    int id;
    public:
    code(int a){
        id = a;
    }
    code(code&x){
        id = x.id;
    }
    void display(){
        cout<<"id="<<id<<endl;
    }};

int main(){
    code c1(10);
    code c2(c1);
    cout<<"code c1: ";
    c1.display();
    cout<<"code c2: ";
    c2.display();
    return 0;
}