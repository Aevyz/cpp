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