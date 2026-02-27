#include <iostream>
using namespace std;
class x{
    int a=5;
    friend class y;
};
class y{
    public:
    void show(x obj){
        cout<<obj.a<<endl;
    }
};
int main(){
    int show(x obj);
}