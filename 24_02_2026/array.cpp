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

// Normalcost variable it is a normal variable and when ever we create a object in the class than the object will recive its own copy of the member variable.
// Examle: in the above code we have created 3 objects s1,s2 and s3 and each object will have its own copy of normalcount variable and when we increment the normalcount variable in the constructor than it will increment the normalcount variable for each object and when we print the normalcount variable for each object than it will print 1 for each object because each object has its own copy of normalcount variable.