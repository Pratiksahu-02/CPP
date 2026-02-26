#include <iostream>
class student{
    public:
    int normalcount=0;
    static int staticcount;
    student(){
        normalcount++;
        staticcount++;
    }
};

int student::staticcount=0;
int main(){
    student s1,s2,s3;
    std::cout << "Normal count: " << s1.normalcount << "\n";
    std::cout << "Normal count: " << s2.normalcount << "\n";
    std::cout << "Normal count: " << s3.normalcount << "\n";
    std::cout << "Static count: " << student::staticcount << "\n";

}