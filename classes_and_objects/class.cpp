#include <iostream>
using namespace std;

class student{
    private:
    int roll_no;
    float marks;
    public:
    void put_data(int r, float m);
    void display();
};

void student::put_data(int r, float m){
    roll_no = r;
    marks = m;
}

void student::display(){
    cout << "Roll No: " << roll_no << endl;
    cout << "Marks: " << marks << endl;
}

int main(){
    student s1;
    s1.put_data(101, 95.5);
    s1.display();
    return 0;
}