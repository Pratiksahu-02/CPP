### Inline Functions in C++ <hr>
An inline function in c++ is a function that is expanded in line when it is called.
Instead of transferring control to the function, the compiler replaces the function call with the actual code of the function. This can improve performance by eliminating the overhead of a function call, especially for small functions. <br>
(OR When the compiler encounters an inline function, it replaces the function call with the actual code of the function. This can improve performance by eliminating the overhead of a function call, especially for small functions.)

#### Syntax of Inline Function
```cppinline return_type function_name(parameters) {
    // function body
}
```
#### Example of Inline Function
```cpp#include <iostream>
using namespace std;
inline int add(int a, int b) {
    return a + b;
}
int main() {
    int x = 5, y = 10;
    cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << endl;
    return 0;
}
```
In this example, the `add` function is declared as an inline function. When the `add` function is called in the `main` function, the compiler replaces the call to `add(x, y)` with the actual code of the `add` function, which is `return a + b;`. This can improve performance by eliminating the overhead of a function call, especially since `add` is a small function.