- A function is a block of code which only runs when it is called. You can pass data, known as parameters, into a function. A function can return data as a result.
- In C++ a function is defined using the following syntax:
```cppreturnType functionName(parameters) {
  // code to be executed
}
```- The `returnType` is the data type of the value that the function will return. If the function does not return a value, you can use `void` as the return type.
- The `functionName` is the name of the function, which is used to call it

-There are two importent element in a function we should know about them before we start to write a function:
1. Parameters: Parameters are the variables that are passed to a function when it is called. They are used to provide input to the function. Parameters are defined in the function declaration and can be of any data type. For example:
```cpp  void myFunction(int x, string y) {
  // code to be executed
}
```
In this example, `x` and `y` are parameters of the function `myFunction`. When you call this function, you can pass values for these parameters. For example:
```cpp  myFunction(5, "Hello");
```In this case, `5` is passed to the parameter `x` and `"Hello"` is
passed to the parameter `y`.
2. Arguments: Arguments are the actual values that are passed to a function when it is called. They are used to provide input to the function. Arguments can be of any data type and must match the parameters defined in the function declaration. For example:
```cpp  void myFunction(int x, string y) {
  // code to be executed
}
```
In this example, `x` and `y` are parameters of the function `myFunction`. When you call this function, you can pass values for these parameters. For example:
```cpp  myFunction(5, "Hello");
```In this case, `5` is an argument that is passed to the parameter `x` and `"Hello"` is an argument that is passed to the parameter `y`.

Q> What is the difference between parameters and arguments in a function?
A> Parameters are the variables that are defined in the function declaration and are used to receive input when the function is called. Arguments, on the other hand, are the actual values that are passed to the function when it is called. In other words, parameters are placeholders for the values that will be passed to the function, while arguments are the actual values that are passed to the function.
- Functions can also return values. To return a value from a function, you can use the `return` statement followed by the value you want to return. For example:
```cpp  int add(int a, int b) {
  return a + b;
}
```
In this example, the function `add` takes two parameters `a` and `b`, adds them together, and returns the result. You can call this function and store the returned value in a variable like this:
```cpp  int result = add(5, 3);
```In this case, `result` will hold the value `8`, which is the sum of `5` and `3`.
- Functions can also be called without returning a value. In this case, you can use the `void` return type. For example:
```cpp  void printMessage(string message) {
  cout << message << endl;
}
```
In this example, the function `printMessage` takes a string parameter `message` and prints it to the console. Since it does not return a value, we use `void` as the return type. You can call this function like this:
```cpp  printMessage("Hello, World!");
```In this case, the message "Hello, World!" will be printed to the console.
