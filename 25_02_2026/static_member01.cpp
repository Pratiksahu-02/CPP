#include <iostream>
using namespace std;
class myclass{
    public:
    static void displaymessage(){
        cout<<"Hello World!"<<endl;
    }
};
int main(){
    myclass::displaymessage();
    return 0;
}
//output: Hello World!