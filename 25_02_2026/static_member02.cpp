#include <iostream>
using namespace std;
class MathOperation{
    public:
    static int square(int num){
        return num * num;
    }
};
int main(){
    int number = 5;
    cout << "The square of " << number << " is: " << MathOperation::square(number) << endl;
    return 0;
}