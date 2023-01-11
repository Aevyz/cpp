# Arrays and Vectors

Difference: Vectors variable length whilst Arrays are fixed.

## Arrays

`std::array<T, num>`

- `num` is the number of elements
- elements lie contiguously in memory
- size()
- `a[1]` is not bound checked
- `a.at(1)` is bound checked
  - `std::out_of_range`
- has iterators

### C Style Arrays
For backwards compatibility, c style arrays exist, but are not upgraded.

```c
int a[10] = {};
float b[3] = {0.1, 0.2, 0.3}
```

## Vectors

`std::vector<T>`

- dynamically sized lists
- guaranteed to be contiguous
- additional functions
  - push_back --> Append
  - clear --> clear all contents
  - resize --> resize vector

## Additional Loops

`for(optional_init; auto i : container_with_iterator)`

e.g.

``
