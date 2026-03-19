#include <iostream>
using namespace std;
class engine{
    public:
    void start(){
        std::cout<<"EngineStarted:\n";
    }
};
class car:public engine{
    public:
    void drive(){
        start();
        std::cout<<"Car is driving:\n";
    }
};
int main(){
    car c;
    c.drive();
    c.start();
    return 0;
}