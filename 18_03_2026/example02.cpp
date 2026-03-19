#include<iostream>
using namespace std;
class libraryresource{
    public:
    int id;
    void setid(int x){
        id=x;
    }
};
class book:protected libraryresource{
    public:
    void registerBook(int x){
        setid(x);
    }
    void showid(){
        cout<<"Book id is:"<<id<<endl;
    }
};
int main(){
    book b;
    b.registerBook(123);
    b.showid();
    return 0;
}