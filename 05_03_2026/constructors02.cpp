#include <iostream>
using namespace std;

class student{
    int roll;
    public:
    student(int r);
    void display();
};

student::student(int r){
    roll=r;
}

void student::display(){
    cout << "Roll: " << roll << endl;
}

int main(){
    student obj(101);
    obj.display();
    return 0;
}