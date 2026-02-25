#include <iostream>
using namespace std;

class box{
    static int length;
    static int breadth;
    static int height;
    public:
    static void print(){
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Height: "<<height<<endl;
    }
};
int box::length = 10;
int box::breadth = 5;
int box::height = 3;
int main(){
    cout<<"static member function is called through class name:"<<endl;
    box::print();
    return 0;
}

//only one copy of static data member is created and shared by all objects of the class.