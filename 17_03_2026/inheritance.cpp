#include <iostream>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"This animal eats food"<<endl;
    }
    void sleep(){
        cout<<"This animal sleeps:"<<endl;
    }
};

class dog:public animal{
    public:
    void bark(){
        cout<<"This animal barks"<<endl;
    }
};

class cow:public animal{
    public:
    void moo(){
        cout<<"This animal moos"<<endl;
    }
};

int main(){
    dog d;
    cow c;
    cout<<"Dog Behaviour:"<<endl;
    d.eat();
    d.sleep();
    d.bark();
    cout<<"Cow Behaviour:"<<endl;
    c.eat();
    c.sleep();
    c.moo();
    return 0;
}

