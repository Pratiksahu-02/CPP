#include <iostream>

class student{
    int roll_no;
    float marks;
    public:
    void put_data(int r, float m){
        roll_no = r;
        marks = m;
    }
    void display(){
        std::cout << "Roll No: " << roll_no << "\n";
        std::cout << "Marks: " << marks << "\n";
    }
};

int main(){
    student s1;
    s1.put_data(101, 95.5);
    s1.display();
    return 0;
}