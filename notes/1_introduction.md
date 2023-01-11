# C++ Basics

## Declaring a variable

Safe
```c++
int x{0};
int b{7.5}; // ERROR: no narrowing allowed
```

Unsafe (will cast)
```c++
int a = 42; // a = 42
int b = 42.5; // !!! b = 42 !!!
int c(3); // c = 3
int d(3.5); // !!! d = 3 !!!
```

Important: Make sure to use `{}` for initialization, as `()` is for constructors

```c++
std::vector<int> v1{99}; // v1 is a vector of 1 element, 99
std::vector<int> v2(99); // v2 is a vector of 99 elements, all being 0

std::vector<std::string> v1{"hello"}; // v1 is a vector with 1 element, "hello"
std::vector<std::string> v2("hello"); // v2 errors out
```

### For structs

```c++
struct S { int x; std::string s; };
S s{1, "hello"}; //Struct s has 1 and "hello" in it
```

Items with `std::initializer_list<T>` can accept multiple initialization values using `{}`, e.g. `std::vector`. Other items, such as `std::complex` treat `{}` as constructor, e.g. `std::complex<double> z{0, 1};`

## Default Values

Type | Default Value
---|---
`int x{};` | `x = 0`
`double d{};` | `d = 0.0`
`std::vector<int> v{};` |`v = empty vector`
`std::string s{};` | `s = ""`

## Auto

If you can't be bothered to identify the type, use the keyword `auto`. 

```c++
auto a{5}; //Int
auto b{"hi"}; //String
```
but you cannot change types
```c++
auto c{3};
c = "Hi"; //Error
```

Best use auto for complicated stuff you don't want to figure out the type for

```c++
auto u{std::make_unique<int>()}; // Type u: std::unique_ptr<int, std::default_delete<int>>
```