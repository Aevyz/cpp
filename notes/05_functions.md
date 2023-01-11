# Functions

```cpp
return_type function_name(opt_parameter_list){
    doSomething();
}
```

- `void` is no return type
- all other functions must contain a `return` statement
  - except the main, which returns 0 by default 
- arguments are by default passed by value
  - copy of value is taken, which does not alter original
  - see `2.cpp`


## Unnamed Argument

Absolutely useless, but I guess

```cpp
int myParamDoesNothing(int){
  return 1;
}
myParamDoesNothing(); // Fails
myParamDoesNothing(123456); //1
```

## Default Argument

```cpp
int foo(int a, int b = 2, int c = 3){
  return a+b+c;
}
foo(1);//6
foo(1,1);//5
foo(1,1,1)//3
```