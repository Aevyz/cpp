# Operators

Operator | Example
---|---
Unary Operators | Negation -a, address-of &a, dereference *a
Binary Operators | Equality a==a, multiplication a*a
Ternary Operators | a ? b : c

> boolean_condition ? this_if_bc_is_true : this_if_bc_is_false

## Arithmetic Operators

Operator | Explanation
---|---
+a | unary plus
-a | unary minus
a + b|
a - b|
a * b|
a / b |
a % b | modulo
~a | bit-wise NOT
a & b| bit-wise AND
a | b| bit-wise OR
a ^ b| bit-wise XOR
a << b | bit-wise left shift
a >> b | bit-wise right shift

Undefined behavior occurs when

- signed overflow
- division by zero
- shift by negative offset
- shift by offset larger than the type's width

## Logical and relational operators
Operator | Explanation
---|---
!a |logical NOT
a && b| logical AND (short-circuiting)
a || b |logical OR (short-circuiting)
a == b| equal to
a != b| not equal to
a < b| less than
a > b| greater than
a <= b| less than or equal to
a >= b| greater than or equal to

## Assignment operators

Operator | Explanation
---|---
a = b | simple assignment
a += b | addition assignment (equal to a = a + b)
a -= b | subtraction assignment
a *= b | multiplication assignment
a /= b | division assignment
a %= b | modulo assignment
a &= b | bit-wise AND assignment
a |= b | bit-wise OR assignment
a ^= b | bit-wise XOR assignment
a <<= b | bit-wise left shift assignment
a >>= b | bit-wise right shift assignment

- a must be an lvalue
- b can be lvalue or rvalue

```c++
int computeValue(){
    return 0;
}
if(int d = computeValue()){
    //Do something if d !=0
}
else{
    //Do something if d == 0
    //d is usable in both
}
```
### LValue and RValue

- lvalue refers to an object's identity
- rvalue refers to an object's value

## Increment / Decrement
Operator | Explanation
---|---
++a |prefix increment
--a |prefix decrement
a++ |postfix increment
a-- |postfix decrement

- Prefix
  - 