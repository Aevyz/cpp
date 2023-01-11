# References

References are aliases to existing objects

- lvalue reference: &declarator
- rvalue reference: &&declarator

Do note that...
- no void references
- cannot have references of references
  - therefore no arrays of references

## Lvalue Reference

```cpp
int i{10};
int j{20};

//Create an alias for i
//Any operation done to r is done to i
int& r{i}; 

r = 21; //i = 21
r= j; //i=20
i = 123 //i = r = 123
```

You can also use it for functions:

```cpp
int optA{0};
int optB{0};
int& foo(unsigned which){
    if(which){
        return optA; 
    }
    else{
        return optB;
    }
}
int main(){
    foo(0) = 1;
}
```

## Rvalue Reference

References to a value.

```cpp
int i{10}

int&& j{i} // will not work
int&& k{4} // will work
```