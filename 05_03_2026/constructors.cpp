#include <iostream>
using namespace std;

class integer{
    int a;
    public:
    integer(int x){ //declare a constructor with one parameter
        a=x;
    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
    }
};

integer::integer(int x){ //define the constructor outside the class
    a=x;
}

int main(){
    integer obj(10); //create an object and call the constructor
    obj.display();
    return 0;
}