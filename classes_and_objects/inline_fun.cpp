#include <iostream>
using namespace std;

class item{
    int number;
    float cost;
    public:
    void put_data(int n, float c){
        number = n;
        cost = c;
    }
    void display(){
        cout << "Number: " << number << "\n";
        cout << "Cost: " << cost << "\n";
    }
};

int main(){
    item i1;
    i1.put_data(101, 95.5);
    cout<<"\n object i1: ";
    i1.display();
    return 0;
}
