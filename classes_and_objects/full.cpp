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

//With the help of s1 object we calling the function and passing these values to rollno and marks indirect;y and with the help of s1 object we are calling the display function to print the values of rollno and marks.