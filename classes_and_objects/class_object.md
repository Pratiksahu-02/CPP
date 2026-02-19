<!-- ````md -->
# 📘 Classes in C++ (OOP) — Complete Notes

## ✅ What is a Class?

A **class** is a **user-defined data type** that serves as a **blueprint** for creating objects.

It defines:

- **Data members (Attributes / Properties)** → variables  
- **Member functions (Methods / Behaviors)** → functions  

So, a class is like a **template**, and objects are the **real instances** made from it.

---

## 🔥 Why do we use Classes?

Classes are used to:

- Organize code properly
- Model real-world entities (Student, Car, BankAccount, etc.)
- Combine data + behavior together
- Provide security using access control

---

## 🔒 Encapsulation (Data Hiding)

A class helps in hiding information (data) and functions from the outside world, allowing controlled access to limited data and functions.

This is known as **Encapsulation**, one of the fundamental principles of OOP.

> **Encapsulation = Wrapping data + functions together and protecting the data.**

---

## 🔑 Default Access in C++

👉 **By default, all members of a class are `private`.**

(Unlike `struct`, where default is `public`.)

---

# 🧱 Syntax of Class

```cpp
class ClassName {
private:
    // data members (variables)

public:
    // member functions (methods)
};
// <!-- ```` -->

---

## 📌 Example (Basic Class)

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int roll;

public:
    void setRoll(int r) {
        roll = r;
    }

    void showRoll() {
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.setRoll(10);
    s.showRoll();
}
```

---

# 🔐 Access Specifiers in C++

| Specifier   | Accessible From              |
| ----------- | ---------------------------- |
| `public`    | Anywhere                     |
| `private`   | Only inside the class        |
| `protected` | Inside class + derived class |

---

## 🟢 Public

Accessible from anywhere.

```cpp
public:
    int x;
```

---

## 🔴 Private

Accessible only inside the class.

```cpp
private:
    int x;
```

---

## 🟡 Protected

Accessible inside the class + derived class.

```cpp
protected:
    int x;
```

---

# 📦 Objects in C++

An **object** is an instance of a class.

```cpp
Student s1;   // s1 is an object of Student class
```

---

# 🏗️ Constructors in C++

## ✅ What is a Constructor?

A **constructor** is a special function that:

* Has the same name as the class
* Has no return type
* Automatically runs when an object is created

---

## 1️⃣ Default Constructor

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called!" << endl;
    }
};

int main() {
    Demo d;
}
```

---

## 2️⃣ Parameterized Constructor

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int roll;

public:
    Student(int r) {
        roll = r;
    }

    void show() {
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s(10);
    s.show();
}
```

---

## 3️⃣ Constructor Overloading

Multiple constructors in the same class.

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default constructor" << endl;
    }

    Demo(int x) {
        cout << "Parameterized constructor: " << x << endl;
    }
};

int main() {
    Demo d1;
    Demo d2(5);
}
```

---

# 💥 Destructor in C++

## ✅ What is a Destructor?

A destructor:

* Is called automatically when an object is destroyed
* Used to free memory / resources
* Has the same name as the class but with `~`

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo d;
}
```

---

# 🧠 This Pointer in C++

`this` is a pointer that stores the address of the current object.

```cpp
#include <iostream>
using namespace std;

class Demo {
private:
    int x;

public:
    void setX(int x) {
        this->x = x;   // this->x means current object's x
    }

    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Demo d;
    d.setX(10);
    d.show();
}
```

---

# 🧩 Static Members in C++

## ✅ Static Data Member

* Shared among all objects
* Only one copy exists

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    static int count;

    Demo() {
        count++;
    }
};

int Demo::count = 0;

int main() {
    Demo d1, d2, d3;
    cout << "Count: " << Demo::count << endl;
}
```

---

## ✅ Static Member Function

* Can access only static members
* Called using class name

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    static void show() {
        cout << "Static function called" << endl;
    }
};

int main() {
    Demo::show();
}
```

---

# 🔁 Inheritance in C++

Inheritance means one class can acquire properties and behavior of another class.

---

## 🧬 Types of Inheritance

1. Single Inheritance
2. Multilevel Inheritance
3. Multiple Inheritance
4. Hierarchical Inheritance
5. Hybrid Inheritance

---

## ✅ Single Inheritance Example

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
}
```

---

# 🔄 Function Overloading (Compile Time Polymorphism)

Same function name but different parameters.

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    void add(int a, int b) {
        cout << a + b << endl;
    }

    void add(double a, double b) {
        cout << a + b << endl;
    }
};

int main() {
    Demo d;
    d.add(2, 3);
    d.add(2.5, 3.5);
}
```

---

# 🔁 Function Overriding (Runtime Polymorphism)

Same function name in base and derived class.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();
}
```

---

# ⚡ Virtual Function (Runtime Polymorphism)

Virtual functions allow correct function calling using base class pointer.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal *a;
    Dog d;

    a = &d;
    a->sound();
}
```

---

# 🧾 Pure Virtual Function (Abstract Class)

A class becomes abstract if it contains at least one pure virtual function.

```cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle c;
    c.draw();
}
```

---

# 🧱 Friend Function in C++

A friend function can access private members of a class.

```cpp
#include <iostream>
using namespace std;

class Demo {
private:
    int x = 10;

public:
    friend void show(Demo d);
};

void show(Demo d) {
    cout << d.x << endl;
}

int main() {
    Demo d;
    show(d);
}
```

---

# 🧠 Operator Overloading

Operator overloading allows redefining operators for user-defined types.

```cpp
#include <iostream>
using namespace std;

class Demo {
private:
    int x;

public:
    Demo(int a) {
        x = a;
    }

    Demo operator + (Demo d) {
        return Demo(x + d.x);
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    Demo d1(10), d2(20);
    Demo d3 = d1 + d2;
    d3.show();
}
```

---

# 🏦 Real-Life Example: Bank Account Class

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accNo;
    double balance;

public:
    BankAccount(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b("Pratik", 101, 5000);

    b.showDetails();
    b.deposit(1000);
    b.withdraw(2000);
    b.showDetails();
}
```

---

# 🧾 Basic Markdown Symbols Everyone Should Know

| Symbol         | Use             |
| -------------- | --------------- |
| `#`            | Heading         |
| `**bold**`     | Bold            |
| `*italic*`     | Italic          |
| `~~strike~~`   | Strikethrough   |
| `-` or `*`     | Unordered list  |
| `1.`           | Ordered list    |
| `[text](link)` | Link            |
| `![alt](img)`  | Image           |
| `` `code` ``   | Inline code     |
| ` `            | Code block      |
| `>`            | Quote           |
| `---`          | Horizontal line |

---

```
```
