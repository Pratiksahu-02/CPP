#include <iostream>
using namespace std;
class emplyee{
    int salary;
    public:
    emplyee(int s){
        salary =s;
    }
    friend void displaysalary (emplyee emp);
};
void displaysalary(emplyee emp){
    cout<<"display salary:"<<emp.salary;

}
int main(){
    emplyee myemp(60000);
    displaysalary(myemp);
    return 0;
}
