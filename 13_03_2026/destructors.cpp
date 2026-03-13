#include <iostream>
class array
{
    int *data;
    int size;

public:
    array(int s)
    {
        size = s;
        data = new int[size];
        std::cout << "Array of size" << size << " is created." << std::endl;
    }
    ~array()
    {
        delete[] data;
        std::cout << "Array of size" << size << " is destroyed." << std::endl;
    }
};
int main()
{
    array a1(5);
    array a2(10);
    return 0;
}