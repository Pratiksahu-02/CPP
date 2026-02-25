#include <iostream>
#include <string>
class student{
    std::string name;
    int age;
    public:
    void setdata(std::string n, int a){
        name = n;
        age = a;
    }
    void display(){
        std::cout<<"Name: "<<name<<"Age:"<<age<<"\n"; 
    }

};
int main(){
    student s1,s2;
    s1.setdata("Alice", 20);
    s2.setdata("Bob", 22);
    student s[2] = {s1, s2};
    for(int i=0; i<2; i++){
        s[i].display();
    }
}