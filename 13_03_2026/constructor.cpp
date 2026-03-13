#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    char *name;
    int length;

public:
    MyString()
    {
        length = 0;
        name = new char[length + 1];
        name[0] = '\0';
    }
    MyString(const char *s)
    {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }
    void display()
    {
        cout << name << endl;
    }
    void join(MyString &a, MyString &b)
    {
        length = a.length + b.length;
        delete[] name;
        name = new char[length + 1];
        strcpy(name, a.name);
        strcat(name, b.name);
    }
};

int main()
{
    const char *first = "Hello";
    MyString name1(first);
    MyString name2("World");
    MyString name3("nice to meet you");
    MyString s1, s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    return 0;
}
