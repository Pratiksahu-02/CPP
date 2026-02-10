#include <iostream>
using namespace std;
int sum(int num1,int num2){
    // cout<<"Enter a number:";
    // cin>>num1;
    // cout<<"Enter another number:";
    // cin>>num2;
    cout<<"Sum of two number is "<<num1+num2<<endl;
    return 0;

}

int sub(int num1,int num2){
    // cout<<"Enter a number:";
    // cin>>num1;
    // cout<<"Enter another number:";
    // cin>>num2;
    if (num1>num2){
        cout<<"Sub of two number is "<<num1-num2<<endl;
    }
    return 0;

}


int main(){
    int num1,num2;
    cout<<"Enter a number:";
    cin>>num1;
    cout<<"Enter another number:";
    cin>>num2;
    sum(num1,num2);
    sub(num1,num2);
}