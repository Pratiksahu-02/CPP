#include <iostream>
const int size=10;
class array{
    int a[size];
    public:
    void setval(void);
    void display(void);
};
void array::setval(void){
    std::cout << "Enter " << size << " elements: ";
    for(int i=0; i<size; i++){
        std::cin >> a[i];
    }
}

void array::display(void){
    std::cout << "The elements are: ";
    for(int i=0; i<size; i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    array arr;
    arr.setval();
    arr.display();
    return 0;
}