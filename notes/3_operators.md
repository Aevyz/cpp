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
  - Increment the value of the object and return a reference to the result
- Postfix 
  - Increment the value of the object, however return a copy of the original

<div class="t-navbar" style=""><div class="t-navbar-sep">&nbsp;</div><div class="t-navbar-head"><a href="/w/cpp" title="cpp"> C++</a><div class="t-navbar-menu"><div><div><table class="t-nv-begin" style="line-height:1.1em;" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/compiler_support" title="cpp/compiler support"> Compiler support</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/freestanding" title="cpp/freestanding"> Freestanding and hosted</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language" title="cpp/language"> Language</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/standard_library" title="cpp/standard library"> Standard library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/header" title="cpp/header"> Standard library headers</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/named_req" title="cpp/named req"> Named requirements </a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/feature_test" title="cpp/feature test"> Feature test macros </a> <span class="t-mark-rev t-since-cxx20">(C++20)</span> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/utility#Language_support" title="cpp/utility"> Language support library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/concepts" title="cpp/concepts"> Concepts library</a> <span class="t-mark-rev t-since-cxx20">(C++20)</span> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/meta" title="cpp/meta"> Metaprogramming library</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/error" title="cpp/error"> Diagnostics library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/utility" title="cpp/utility"> General utilities library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/string" title="cpp/string"> Strings library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/container" title="cpp/container"> Containers library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/iterator" title="cpp/iterator"> Iterators library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/ranges" title="cpp/ranges"> Ranges library</a> <span class="t-mark-rev t-since-cxx20">(C++20)</span> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/algorithm" title="cpp/algorithm"> Algorithms library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/numeric" title="cpp/numeric"> Numerics library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/locale" title="cpp/locale"> Localizations library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/io" title="cpp/io"> Input/output library</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/filesystem" title="cpp/filesystem"> Filesystem library</a> <span class="t-mark-rev t-since-cxx17">(C++17)</span> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/regex" title="cpp/regex"> Regular expressions library</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/thread" title="cpp/thread"> Concurrency support library</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/experimental" title="cpp/experimental"> Technical specifications</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/symbol_index" title="cpp/symbol index"> Symbols index</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/links/libs" title="cpp/links/libs"> External libraries</a> </td></tr>
</tbody></table></div><div><span class="editsection noprint plainlinks" title="Edit this template"><a rel="nofollow" class="external text" href="https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&amp;action=edit">[edit]</a></span></div></div></div></div><div class="t-navbar-sep">&nbsp;</div><div class="t-navbar-head"><a href="/w/cpp/language" title="cpp/language"> C++ language</a><div class="t-navbar-menu"><div><div style="display:inline-block">
<div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv-h1"><td colspan="5"> General topics</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/preprocessor" title="cpp/preprocessor"> Preprocessor</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/comment" title="cpp/comment"> Comments</a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/keyword" title="cpp/keyword"> Keywords</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/escape" title="cpp/language/escape"> Escape sequences</a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h1"><td colspan="5"> <a href="/w/cpp/language/statements" title="cpp/language/statements"> Flow control</a></td></tr>
<tr class="t-nv-h2"><td colspan="5"> Conditional execution statements</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/if" title="cpp/language/if"><tt>if</tt></a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/switch" title="cpp/language/switch"><tt>switch</tt></a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h2"><td colspan="5"> Iteration statements (loops)</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/for" title="cpp/language/for"><tt>for</tt></a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/range-for" title="cpp/language/range-for"> range-<code>for</code></a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/while" title="cpp/language/while"><tt>while</tt></a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/do" title="cpp/language/do"> <code>do-while</code></a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h2"><td colspan="5"> Jump statements </td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/continue" title="cpp/language/continue"><tt>continue</tt></a> - <a href="/w/cpp/language/break" title="cpp/language/break"><tt>break</tt></a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/goto" title="cpp/language/goto"><tt>goto</tt></a> - <a href="/w/cpp/language/return" title="cpp/language/return"><tt>return</tt></a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h1"><td colspan="5"> <a href="/w/cpp/language/functions" title="cpp/language/functions"> Functions</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/function" title="cpp/language/function"> Function declaration</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/lambda" title="cpp/language/lambda"> Lambda function expression</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/inline" title="cpp/language/inline"> <code>inline</code> specifier</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/except_spec" title="cpp/language/except spec"> Dynamic exception specifications</a> <span class="t-mark-rev t-until-cxx20">(until C++20)</span></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/noexcept_spec" title="cpp/language/noexcept spec"> <code>noexcept</code> specifier</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv-h1"><td colspan="5"> Exceptions</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/throw" title="cpp/language/throw"> <code>throw</code>-expression</a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/try_catch" title="cpp/language/try catch"> <code>try</code>-<code>catch</code> block</a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h1"><td colspan="5"> Namespaces</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/namespace" title="cpp/language/namespace"> Namespace declaration</a> &nbsp;</td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/namespace_alias" title="cpp/language/namespace alias"> Namespace aliases</a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h1"><td colspan="5"> Types</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/types" title="cpp/language/types"> Fundamental types</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/enum" title="cpp/language/enum"> Enumeration types</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/function" title="cpp/language/function"> Function types</a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/class" title="cpp/language/class"> Class/struct types</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/union" title="cpp/language/union"> Union types</a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h2"><td colspan="5"> Specifiers</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/decltype" title="cpp/language/decltype"><tt>decltype</tt></a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/auto" title="cpp/language/auto"><tt>auto</tt></a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/alignas" title="cpp/language/alignas"><tt>alignas</tt></a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/cv" title="cpp/language/cv"> <code>const</code>/<code>volatile</code></a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/constexpr" title="cpp/language/constexpr"><tt>constexpr</tt></a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/storage_duration" title="cpp/language/storage duration"> Storage duration specifiers</a></td></tr>
<tr class="t-nv-h2"><td colspan="5"> <a href="/w/cpp/language/initialization" title="cpp/language/initialization"> Initialization</a></td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/default_initialization" title="cpp/language/default initialization"> Default initialization</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/value_initialization" title="cpp/language/value initialization"> Value initialization</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/zero_initialization" title="cpp/language/zero initialization"> Zero initialization</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/copy_initialization" title="cpp/language/copy initialization"> Copy initialization</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/direct_initialization" title="cpp/language/direct initialization"> Direct initialization</a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/aggregate_initialization" title="cpp/language/aggregate initialization"> Aggregate initialization</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/list_initialization" title="cpp/language/list initialization"> List initialization</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/constant_initialization" title="cpp/language/constant initialization"> Constant initialization</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/reference_initialization" title="cpp/language/reference initialization"> Reference initialization</a></td></tr>
</tbody></table></div></td></tr>
</tbody></table></div>
</div>
<div style="display:inline-block">
<div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv-h1"><td colspan="5"> <a href="/w/cpp/language/expressions" title="cpp/language/expressions"> Expressions</a></td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/value_category" title="cpp/language/value category"> Value categories</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/eval_order" title="cpp/language/eval order"> Order of evaluation</a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/operators" title="cpp/language/operators"> Operators</a></td></tr>
<tr class="t-nv"><td colspan="5"> <strong class="selflink"> Operator precedence</strong></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/operator_alternative" title="cpp/language/operator alternative"> Alternative representations</a></td></tr>
<tr class="t-nv-h2"><td colspan="5"> <a href="/w/cpp/language/expressions#Literals" title="cpp/language/expressions"> Literals</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/bool_literal" title="cpp/language/bool literal"> Boolean</a> - <a href="/w/cpp/language/integer_literal" title="cpp/language/integer literal"> Integer</a> - <a href="/w/cpp/language/floating_literal" title="cpp/language/floating literal"> Floating-point</a></td></tr>   
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/character_literal" title="cpp/language/character literal"> Character</a> - <a href="/w/cpp/language/string_literal" title="cpp/language/string literal"> String</a> - <a href="/w/cpp/language/nullptr" title="cpp/language/nullptr"><tt>nullptr</tt></a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr> 
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/user_literal" title="cpp/language/user literal"> User-defined</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv-h1"><td colspan="5"> Utilities</td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/attributes" title="cpp/language/attributes"> Attributes</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv-h2"><td colspan="5"> Types</td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/typedef" title="cpp/language/typedef"> <code>typedef</code> declaration</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/type_alias" title="cpp/language/type alias"> Type alias declaration</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv-h2"><td colspan="5"> Casts</td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/implicit_conversion" title="cpp/language/implicit conversion"> Implicit conversions</a> - <a href="/w/cpp/language/explicit_cast" title="cpp/language/explicit cast"> Explicit conversions</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/static_cast" title="cpp/language/static cast"><tt>static_cast</tt></a> - <a href="/w/cpp/language/dynamic_cast" title="cpp/language/dynamic cast"><tt>dynamic_cast</tt></a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/const_cast" title="cpp/language/const cast"><tt>const_cast</tt></a> - <a href="/w/cpp/language/reinterpret_cast" title="cpp/language/reinterpret cast"><tt>reinterpret_cast</tt></a></td></tr>
<tr class="t-nv-h2"><td colspan="5"> Memory allocation</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/new" title="cpp/language/new"> <code>new</code> expression</a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/delete" title="cpp/language/delete"> <code>delete</code> expression</a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h1"><td colspan="5"> <a href="/w/cpp/language/classes" title="cpp/language/classes"> Classes</a></td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/class" title="cpp/language/class"> Class declaration</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/constructor" title="cpp/language/constructor"> Constructors</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/this" title="cpp/language/this"> <code>this</code> pointer</a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/access" title="cpp/language/access"> Access specifiers</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/friend" title="cpp/language/friend"> <code>friend</code> specifier</a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h2"><td colspan="5"> Class-specific function properties</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/virtual" title="cpp/language/virtual"> Virtual function</a> </td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/override" title="cpp/language/override"> <code>override</code> specifier</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/final" title="cpp/language/final"> <code>final</code> specifier</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/explicit" title="cpp/language/explicit"><tt>explicit</tt></a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/static" title="cpp/language/static"><tt>static</tt></a> </td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h2"><td colspan="5"> Special member functions</td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/default_constructor" title="cpp/language/default constructor"> Default constructor</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/copy_constructor" title="cpp/language/copy constructor"> Copy constructor</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/move_constructor" title="cpp/language/move constructor"> Move constructor</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/as_operator" title="cpp/language/as operator" class="mw-redirect"> Copy assignment</a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/move_operator" title="cpp/language/move operator" class="mw-redirect"> Move assignment</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/destructor" title="cpp/language/destructor"> Destructor</a></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h1"><td colspan="5"><a href="/w/cpp/language/templates" title="cpp/language/templates"> Templates</a> </td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/class_template" title="cpp/language/class template"> Class template </a></td></tr>
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/function_template" title="cpp/language/function template"> Function template </a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/template_specialization" title="cpp/language/template specialization"> Template specialization</a></td></tr>   
<tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/parameter_pack" title="cpp/language/parameter pack"> Parameter packs</a> <span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
</tbody></table></div></td></tr>
<tr class="t-nv-h1"><td colspan="5"> Miscellaneous </td></tr>
<tr class="t-nv-col-table"><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/asm" title="cpp/language/asm"> Inline assembly</a></td></tr>
</tbody></table></div></td><td><div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv"><td colspan="5"> <a href="/w/cpp/language/history" title="cpp/language/history"> History of C++</a></td></tr>
</tbody></table></div></td></tr>
</tbody></table></div>
</div><div><span class="editsection noprint plainlinks" title="Edit this template"><a rel="nofollow" class="external text" href="https://en.cppreference.com/mwiki/index.php?title=Template:cpp/language/navbar_content&amp;action=edit">[edit]</a></span></div></div></div></div><div class="t-navbar-sep">&nbsp;</div><div class="t-navbar-head"><a href="/w/cpp/language/expressions" title="cpp/language/expressions"> Expressions</a><div class="t-navbar-menu"><div><div style="display:inline-block">
<div><table class="t-nv-begin" style="" cellpadding="0">
<tbody><tr class="t-nv-h2"><td colspan="5">General </td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/value_category" title="cpp/language/value category">Value categories</a> (lvalue, rvalue, xvalue)</td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/eval_order" title="cpp/language/eval order">Order of evaluation</a> (sequence points)</td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/constant_expression" title="cpp/language/constant expression">Constant expressions</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/expressions#Potentially-evaluated_expressions" title="cpp/language/expressions">Potentially-evaluated expressions</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/expressions#Primary_expressions" title="cpp/language/expressions">Primary expressions</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/lambda" title="cpp/language/lambda">Lambda-expression</a><span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv-h2"><td colspan="5">Literals </td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/integer_literal" title="cpp/language/integer literal">Integer literals</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/floating_literal" title="cpp/language/floating literal">Floating-point literals</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/bool_literal" title="cpp/language/bool literal">Boolean literals</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/character_literal" title="cpp/language/character literal">Character literals</a> including <a href="/w/cpp/language/escape" title="cpp/language/escape">escape sequences</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/string_literal" title="cpp/language/string literal">String literals</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/nullptr" title="cpp/language/nullptr">Null pointer literal</a><span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/user_literal" title="cpp/language/user literal">User-defined literal</a><span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv-h2"><td colspan="5">Operators </td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/operator_assignment" title="cpp/language/operator assignment">Assignment operators</a>:
<code>a=b</code>, <code>a+=b</code>, <code>a-=b</code>, <code>a*=b</code>, <code>a/=b</code>, <code>a%=b</code>, <code>a&amp;=b</code>, <code>a|=b</code>, <code>a^=b</code>, <code>a&lt;&lt;=b</code>, <code>a&gt;&gt;=b</code></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/operator_incdec" title="cpp/language/operator incdec">Increment and decrement</a>: <code>++a</code>, <code>--a</code>, <code>a++</code>, <code>a--</code></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/operator_arithmetic" title="cpp/language/operator arithmetic">Arithmetic operators</a>:
<code>+a</code>, <code>-a</code>, <code>a+b</code>, <code>a-b</code>, <code>a*b</code>, <code>a/b</code>, <code>a%b</code>, <code>~a</code>, <code>a&amp;b</code>, <code>a|b</code>, <code>a^b</code>, <code>a&lt;&lt;b</code>, <code>a&gt;&gt;b</code></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/operator_logical" title="cpp/language/operator logical">Logical operators</a>: <code>a||b</code>, <code>a&amp;&amp;b</code>, <code>!a</code></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/operator_comparison" title="cpp/language/operator comparison">Comparison operators</a>: <code>a==b</code>, <code>a!=b</code>, <code>a&lt;b</code>, <code>a&gt;b</code>, <code>a&lt;=b</code>, <code>a&gt;=b</code>, <code>a&lt;=&gt;b</code><span class="t-mark-rev t-since-cxx20">(C++20)</span></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/operator_member_access" title="cpp/language/operator member access">Member access operators</a>: <code>a[b]</code>, <code>*a</code>, <code>&amp;a</code>, <code>a-&gt;b</code>, <code>a.b</code>, <code>a-&gt;*b</code>, <code>a.*b</code></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/operator_other" title="cpp/language/operator other">Other operators</a>: <code>a(...)</code>, <code>a,b</code>, <code>a?b:c</code></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/new" title="cpp/language/new">new-expression</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/delete" title="cpp/language/delete">delete-expression</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/throw" title="cpp/language/throw">throw-expression</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/alignof" title="cpp/language/alignof"><code>alignof</code></a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/sizeof" title="cpp/language/sizeof"><code>sizeof</code></a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/sizeof..." title="cpp/language/sizeof..."><code>sizeof...</code></a><span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/typeid" title="cpp/language/typeid"><code>typeid</code></a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/noexcept" title="cpp/language/noexcept"><code>noexcept</code></a><span class="t-mark-rev t-since-cxx11">(C++11)</span></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/fold" title="cpp/language/fold">Fold expression</a><span class="t-mark-rev t-since-cxx17">(C++17)</span></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/operator_alternative" title="cpp/language/operator alternative">Alternative representations of operators</a></td></tr>
<tr class="t-nv"><td colspan="5"><strong class="selflink">Precedence and associativity</strong></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/operators" title="cpp/language/operators">Operator overloading</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/default_comparisons" title="cpp/language/default comparisons">Default comparisons</a><span class="t-mark-rev t-since-cxx20">(C++20)</span></td></tr>
<tr class="t-nv-h2"><td colspan="5">Conversions </td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/implicit_conversion" title="cpp/language/implicit conversion">Implicit conversions</a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/const_cast" title="cpp/language/const cast"><code>const_cast</code></a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/static_cast" title="cpp/language/static cast"><code>static_cast</code></a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/reinterpret_cast" title="cpp/language/reinterpret cast"><code>reinterpret_cast</code></a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/dynamic_cast" title="cpp/language/dynamic cast"><code>dynamic_cast</code></a></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/explicit_cast" title="cpp/language/explicit cast">Explicit conversions</a> <code>(T)a</code>, <code>T(a)</code></td></tr>
<tr class="t-nv"><td colspan="5"><a href="/w/cpp/language/cast_operator" title="cpp/language/cast operator">User-defined conversion</a></td></tr>
</tbody></table></div>
</div><div><span class="editsection noprint plainlinks" title="Edit this template"><a rel="nofollow" class="external text" href="https://en.cppreference.com/mwiki/index.php?title=Template:cpp/language/expressions/navbar_content&amp;action=edit">[edit]</a></span></div></div></div></div><div class="t-navbar-sep">&nbsp;</div></div>
<p>The following table lists the precedence and associativity of C++ operators. Operators are listed top to bottom, in descending precedence. 
</p>
<table class="wikitable">

<tbody><tr>
<th style="text-align: left"> Precedence
</th>
<th style="text-align: left"> Operator
</th>
<th style="text-align: left"> Description
</th>
<th style="text-align: left"> Associativity
</th></tr>
<tr>
<th> 1
</th>
<td> <code>::</code>
</td>
<td> <a href="/w/cpp/language/identifiers#Qualified_identifiers" title="cpp/language/identifiers">Scope resolution</a>
</td>
<td style="vertical-align: top" rowspan="6"> Left-to-right →
</td></tr>
<tr>
<th rowspan="5"> 2
</th>
<td style="border-bottom-style: none"> <code>a++</code> &nbsp; <code>a--</code>
</td>
<td style="border-bottom-style: none"> Suffix/postfix <a href="/w/cpp/language/operator_incdec" title="cpp/language/operator incdec">increment and decrement</a>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code><i>type</i>()</code> &nbsp; <code><i>type</i>{} </code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/explicit_cast" title="cpp/language/explicit cast">Functional cast</a>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>a()</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_other#Built-in_function_call_operator" title="cpp/language/operator other">Function call</a>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>a[]</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_member_access#Built-in_subscript_operator" title="cpp/language/operator member access">Subscript</a>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>.</code> &nbsp; <code>-&gt;</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_member_access#Built-in_member_access_operators" title="cpp/language/operator member access">Member access</a>
</td></tr>
<tr>
<th rowspan="10"> 3
</th>
<td style="border-bottom-style: none"> <code>++a</code> &nbsp; <code>--a</code>
</td>
<td style="border-bottom-style: none"> Prefix <a href="/w/cpp/language/operator_incdec" title="cpp/language/operator incdec">increment and decrement</a>
</td>
<td style="vertical-align: top" rowspan="10"> Right-to-left ←
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>+a</code> &nbsp; <code>-a</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Unary <a href="/w/cpp/language/operator_arithmetic#Unary_arithmetic_operators" title="cpp/language/operator arithmetic">plus and minus</a>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>!</code> &nbsp; <code>~</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_logical" title="cpp/language/operator logical">Logical NOT</a> and <a href="/w/cpp/language/operator_arithmetic#Bitwise_logic_operators" title="cpp/language/operator arithmetic">bitwise NOT</a>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>(<i>type</i>)</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/explicit_cast" title="cpp/language/explicit cast">C-style cast</a>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>*a</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_member_access#Built-in_indirection_operator" title="cpp/language/operator member access">Indirection</a> (dereference)
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>&amp;a</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_member_access#Built-in_address-of_operator" title="cpp/language/operator member access">Address-of</a>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/sizeof" title="cpp/language/sizeof"><code>sizeof</code></a>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/sizeof" title="cpp/language/sizeof">Size-of</a><sup id="cite_ref-1" class="reference"><a href="#cite_note-1">[note 1]</a></sup>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/keyword/co_await" title="cpp/keyword/co await"><tt>co_await</tt></a>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/coroutines" title="cpp/language/coroutines">await-expression</a> <span class="t-mark-rev t-since-cxx20">(C++20)</span>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/new" title="cpp/language/new"><code>new</code></a> &nbsp; <a href="/w/cpp/language/new" title="cpp/language/new"><code>new[]</code></a>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/new" title="cpp/language/new">Dynamic memory allocation</a>
</td></tr>
<tr>
<td style="border-top-style: none"> <a href="/w/cpp/language/delete" title="cpp/language/delete"><code>delete</code></a> &nbsp; <a href="/w/cpp/language/delete" title="cpp/language/delete"><code>delete[]</code></a>
</td>
<td style="border-top-style: none"> <a href="/w/cpp/language/delete" title="cpp/language/delete">Dynamic memory deallocation</a>
</td></tr>
<tr>
<th> 4
</th>
<td> <code>.*</code> &nbsp; <code>-&gt;*</code>
</td>
<td> <a href="/w/cpp/language/operator_member_access#Built-in_pointer-to-member_access_operators" title="cpp/language/operator member access">Pointer-to-member</a>
</td>
<td style="vertical-align: top" rowspan="12"> Left-to-right →
</td></tr>
<tr>
<th> 5
</th>
<td> <code>a*b</code> &nbsp; <code>a/b</code> &nbsp; <code>a%b</code>
</td>
<td> <a href="/w/cpp/language/operator_arithmetic#Multiplicative_operators" title="cpp/language/operator arithmetic">Multiplication, division, and remainder</a>
</td></tr>
<tr>
<th> 6
</th>
<td> <code>a+b</code> &nbsp; <code>a-b</code>
</td>
<td> <a href="/w/cpp/language/operator_arithmetic#Additive_operators" title="cpp/language/operator arithmetic">Addition and subtraction</a>
</td></tr>
<tr>
<th> 7
</th>
<td> <code>&lt;&lt;</code> &nbsp; <code>&gt;&gt;</code>
</td>
<td> Bitwise <a href="/w/cpp/language/operator_arithmetic#Bitwise_shift_operators" title="cpp/language/operator arithmetic">left shift and right shift</a>
</td></tr>
<tr>
<th> 8
</th>
<td> <code>&lt;=&gt;</code>
</td>
<td> <a href="/w/cpp/language/operator_comparison#Three-way_comparison" title="cpp/language/operator comparison">Three-way comparison operator</a> <span class="t-mark-rev t-since-cxx20">(since C++20)</span>
</td></tr>
<tr>
<th> 9
</th>
<td> <code>&lt;</code> &nbsp; <code>&lt;=</code> &nbsp; <code>&gt;</code> &nbsp; <code>&gt;=</code>
</td>
<td> For <a href="/w/cpp/language/operator_comparison" title="cpp/language/operator comparison">relational operators</a> &lt; and ≤ and &gt; and ≥ respectively
</td></tr>
<tr>
<th> 10
</th>
<td> <code>==</code> &nbsp; <code>!=</code>
</td>
<td> For <a href="/w/cpp/language/operator_comparison" title="cpp/language/operator comparison">equality operators</a> = and ≠ respectively
</td></tr>
<tr>
<th> 11
</th>
<td> <code>a&amp;b</code>
</td>
<td> <a href="/w/cpp/language/operator_arithmetic#Bitwise_logic_operators" title="cpp/language/operator arithmetic">Bitwise AND</a>
</td></tr>
<tr>
<th> 12
</th>
<td> <code>^</code>
</td>
<td> <a href="/w/cpp/language/operator_arithmetic#Bitwise_logic_operators" title="cpp/language/operator arithmetic">Bitwise XOR</a> (exclusive or)
</td></tr>
<tr>
<th> 13
</th>
<td> <code>|</code>
</td>
<td> <a href="/w/cpp/language/operator_arithmetic#Bitwise_logic_operators" title="cpp/language/operator arithmetic">Bitwise OR</a> (inclusive or)
</td></tr>
<tr>
<th> 14
</th>
<td> <code>&amp;&amp;</code>
</td>
<td> <a href="/w/cpp/language/operator_logical" title="cpp/language/operator logical">Logical AND</a>
</td></tr>
<tr>
<th> 15
</th>
<td> <code>||</code>
</td>
<td> <a href="/w/cpp/language/operator_logical" title="cpp/language/operator logical">Logical OR</a>
</td></tr>
<tr>
<th rowspan="8"> 16
</th>
<td style="border-bottom-style: none"> <code>a?b:c</code>
</td>
<td style="border-bottom-style: none"> <a href="/w/cpp/language/operator_other#Conditional_operator" title="cpp/language/operator other">Ternary conditional</a><sup id="cite_ref-2" class="reference"><a href="#cite_note-2">[note 2]</a></sup>
</td>
<td style="vertical-align: top" rowspan="8"> Right-to-left ←
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/throw" title="cpp/language/throw"><code>throw</code></a>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/throw" title="cpp/language/throw">throw operator</a>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/keyword/co_yield" title="cpp/keyword/co yield"><tt>co_yield</tt></a>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/coroutines" title="cpp/language/coroutines">yield-expression</a> <span class="t-mark-rev t-since-cxx20">(C++20)</span>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_assignment#Builtin_direct_assignment" title="cpp/language/operator assignment">Direct assignment</a> (provided by default for C++ classes)
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>+=</code> &nbsp; <code>-=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_assignment#Builtin_compound_assignment" title="cpp/language/operator assignment">Compound assignment</a> by sum and difference
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>*=</code> &nbsp; <code>/=</code> &nbsp; <code>%=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_assignment#Builtin_compound_assignment" title="cpp/language/operator assignment">Compound assignment</a> by product, quotient, and remainder
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>&lt;&lt;=</code> &nbsp; <code>&gt;&gt;=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> <a href="/w/cpp/language/operator_assignment#Builtin_compound_assignment" title="cpp/language/operator assignment">Compound assignment</a> by bitwise left shift and right shift
</td></tr>
<tr>
<td style="border-top-style: none"> <code>&amp;=</code> &nbsp; <code>^=</code> &nbsp; <code>|=</code>
</td>
<td style="border-top-style: none"> <a href="/w/cpp/language/operator_assignment#Builtin_compound_assignment" title="cpp/language/operator assignment">Compound assignment</a> by bitwise AND, XOR, and OR
</td></tr>
<tr>
<th> 17
</th>
<td> <code>,</code>
</td>
<td> <a href="/w/cpp/language/operator_other#Built-in_comma_operator" title="cpp/language/operator other">Comma</a>
</td>
<td> Left-to-right →
</td></tr></tbody></table>
<ol class="references">
<li id="cite_note-1"><span class="mw-cite-backlink"><a href="#cite_ref-1">↑</a></span> <span class="reference-text">The operand of <code>sizeof</code> can't be a C-style type cast: the expression <span class="t-c"><span class="mw-geshi cpp source-cpp">sizeof <span class="br0">(</span><span class="kw4">int</span><span class="br0">)</span> <span class="sy2">*</span> p</span></span> is unambiguously interpreted as <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="br0">(</span>sizeof<span class="br0">(</span><span class="kw4">int</span><span class="br0">)</span><span class="br0">)</span> <span class="sy2">*</span> p</span></span>, but not <span class="t-c"><span class="mw-geshi cpp source-cpp">sizeof<span class="br0">(</span><span class="br0">(</span><span class="kw4">int</span><span class="br0">)</span><span class="sy2">*</span>p<span class="br0">)</span></span></span>.</span>
</li>
<li id="cite_note-2"><span class="mw-cite-backlink"><a href="#cite_ref-2">↑</a></span> <span class="reference-text">The expression in the middle of the conditional operator (between <code><b>?</b></code> and <code><b>:</b></code>) is parsed as if parenthesized: its precedence relative to <code><b>?:</b></code> is ignored.</span>
</li>
</ol>
<p>When parsing an expression, an operator which is listed on some row of the table above with a precedence will be bound tighter (as if by parentheses) to its arguments than any operator that is listed on a row further below it with a lower precedence. For example, the expressions <span class="t-c"><span class="mw-geshi cpp source-cpp"><a href="http://en.cppreference.com/w/cpp/io/cout"><span class="kw1762">std::<span class="me2">cout</span></span></a> <span class="sy1">&lt;&lt;</span> a <span class="sy3">&amp;</span> b</span></span> and  <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="sy2">*</span>p<span class="sy2">++</span></span></span> are parsed as <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="br0">(</span><a href="http://en.cppreference.com/w/cpp/io/cout"><span class="kw1762">std::<span class="me2">cout</span></span></a> <span class="sy1">&lt;&lt;</span> a<span class="br0">)</span> <span class="sy3">&amp;</span> b</span></span> and <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="sy2">*</span><span class="br0">(</span>p<span class="sy2">++</span><span class="br0">)</span></span></span>, and not as <span class="t-c"><span class="mw-geshi cpp source-cpp"><a href="http://en.cppreference.com/w/cpp/io/cout"><span class="kw1762">std::<span class="me2">cout</span></span></a> <span class="sy1">&lt;&lt;</span> <span class="br0">(</span>a <span class="sy3">&amp;</span> b<span class="br0">)</span></span></span> or <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="br0">(</span><span class="sy2">*</span>p<span class="br0">)</span><span class="sy2">++</span></span></span>.
</p><p>Operators that have the same precedence are bound to their arguments in the direction of their associativity. For example, the expression <span class="t-c"><span class="mw-geshi cpp source-cpp">a <span class="sy1">=</span> b <span class="sy1">=</span> c</span></span> is parsed as <span class="t-c"><span class="mw-geshi cpp source-cpp">a <span class="sy1">=</span> <span class="br0">(</span>b <span class="sy1">=</span> c<span class="br0">)</span></span></span>, and not as <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="br0">(</span>a <span class="sy1">=</span> b<span class="br0">)</span> <span class="sy1">=</span> c</span></span> because of right-to-left associativity of assignment, but <span class="t-c"><span class="mw-geshi cpp source-cpp">a <span class="sy2">+</span> b <span class="sy2">-</span> c</span></span> is parsed <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="br0">(</span>a <span class="sy2">+</span> b<span class="br0">)</span> <span class="sy2">-</span> c</span></span> and not <span class="t-c"><span class="mw-geshi cpp source-cpp">a <span class="sy2">+</span> <span class="br0">(</span>b <span class="sy2">-</span> c<span class="br0">)</span></span></span> because of left-to-right associativity of addition and subtraction.
</p><p>Associativity specification is redundant for unary operators and is only shown for completeness: unary prefix operators always associate right-to-left (<span class="t-c"><span class="mw-geshi cpp source-cpp">delete <span class="sy2">++*</span>p</span></span> is <span class="t-c"><span class="mw-geshi cpp source-cpp">delete<span class="br0">(</span><span class="sy2">++</span><span class="br0">(</span><span class="sy2">*</span>p<span class="br0">)</span><span class="br0">)</span></span></span>) and unary postfix operators always associate left-to-right (<span class="t-c"><span class="mw-geshi cpp source-cpp">a<span class="br0">[</span><span class="nu0">1</span><span class="br0">]</span><span class="br0">[</span><span class="nu0">2</span><span class="br0">]</span><span class="sy2">++</span></span></span> is <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="br0">(</span><span class="br0">(</span>a<span class="br0">[</span><span class="nu0">1</span><span class="br0">]</span><span class="br0">)</span><span class="br0">[</span><span class="nu0">2</span><span class="br0">]</span><span class="br0">)</span><span class="sy2">++</span></span></span>). Note that the associativity is meaningful for member access operators, even though they are grouped with unary postfix operators: <span class="t-c"><span class="mw-geshi cpp source-cpp">a.<span class="me1">b</span><span class="sy2">++</span></span></span> is parsed <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="br0">(</span>a.<span class="me1">b</span><span class="br0">)</span><span class="sy2">++</span></span></span> and not <span class="t-c"><span class="mw-geshi cpp source-cpp">a.<span class="br0">(</span>b<span class="sy2">++</span><span class="br0">)</span></span></span>.
</p><p>Operator precedence is unaffected by <a href="/w/cpp/language/operators" title="cpp/language/operators">operator overloading</a>. For example, <span class="t-c"><span class="mw-geshi cpp source-cpp"><a href="http://en.cppreference.com/w/cpp/io/cout"><span class="kw1762">std::<span class="me2">cout</span></span></a> <span class="sy1">&lt;&lt;</span> a <span class="sy4">?</span> b <span class="sy4">:</span> c<span class="sy4">;</span></span></span> parses as <span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="br0">(</span><a href="http://en.cppreference.com/w/cpp/io/cout"><span class="kw1762">std::<span class="me2">cout</span></span></a> <span class="sy1">&lt;&lt;</span> a<span class="br0">)</span> <span class="sy4">?</span> b <span class="sy4">:</span> c<span class="sy4">;</span></span></span> because the precedence of arithmetic left shift is higher than the conditional operator.
</p>
<h3><span class="editsection">[<a href="/mwiki/index.php?title=cpp/language/operator_precedence&amp;action=edit&amp;section=1" title="Edit section: Notes">edit</a>]</span> <span class="mw-headline" id="Notes">Notes</span></h3>
<p>Precedence and associativity are compile-time concepts and are independent from <a href="/w/cpp/language/eval_order" title="cpp/language/eval order">order of evaluation</a>, which is a runtime concept.
</p><p>The standard itself doesn't specify precedence levels. They are derived from the grammar.
</p><p><a href="/w/cpp/language/const_cast" title="cpp/language/const cast"><code>const_cast</code></a>, <a href="/w/cpp/language/static_cast" title="cpp/language/static cast"><code>static_cast</code></a>, <a href="/w/cpp/language/dynamic_cast" title="cpp/language/dynamic cast"><code>dynamic_cast</code></a>, <a href="/w/cpp/language/reinterpret_cast" title="cpp/language/reinterpret cast"><code>reinterpret_cast</code></a>, <a href="/w/cpp/language/typeid" title="cpp/language/typeid"><code>typeid</code></a>, <a href="/w/cpp/language/sizeof..." title="cpp/language/sizeof..."><code>sizeof...</code></a>, <a href="/w/cpp/language/noexcept" title="cpp/language/noexcept"><code>noexcept</code></a> and <a href="/w/cpp/language/alignof" title="cpp/language/alignof"><code>alignof</code></a> are not included since they are never ambiguous.
</p><p>Some of the operators have <a href="/w/cpp/language/operator_alternative" title="cpp/language/operator alternative">alternate spellings</a> (e.g., <span class="t-c"><span class="mw-geshi cpp source-cpp">and</span></span> for <code>&amp;&amp;</code>, <span class="t-c"><span class="mw-geshi cpp source-cpp">or</span></span> for <code>||</code>, <span class="t-c"><span class="mw-geshi cpp source-cpp">not</span></span> for <code>!</code>, etc.).
</p><p>In C, the ternary conditional operator has higher precedence than assignment operators. Therefore, the expression <span class="t-c"><span class="mw-geshi cpp source-cpp">e <span class="sy1">=</span> a <span class="sy1">&lt;</span> d <span class="sy4">?</span> a<span class="sy2">++</span> <span class="sy4">:</span> a <span class="sy1">=</span> d</span></span>, which is parsed in C++ as <span class="t-c"><span class="mw-geshi cpp source-cpp">e <span class="sy1">=</span> <span class="br0">(</span><span class="br0">(</span>a <span class="sy1">&lt;</span> d<span class="br0">)</span> <span class="sy4">?</span> <span class="br0">(</span>a<span class="sy2">++</span><span class="br0">)</span> <span class="sy4">:</span> <span class="br0">(</span>a <span class="sy1">=</span> d<span class="br0">)</span><span class="br0">)</span></span></span>, will fail to compile in C due to grammatical or semantic constraints in C. See the corresponding C page for details.
</p>
<h3><span class="editsection">[<a href="/mwiki/index.php?title=cpp/language/operator_precedence&amp;action=edit&amp;section=2" title="Edit section: See also">edit</a>]</span> <span class="mw-headline" id="See_also">See also</span></h3>
<table class="wikitable">

<tbody><tr style="text-align:center">
<th colspan="7">Common operators
</th></tr>
<tr style="text-align:center">
<td><a href="/w/cpp/language/operator_assignment" title="cpp/language/operator assignment">assignment</a>
</td>
<td><a href="/w/cpp/language/operator_incdec" title="cpp/language/operator incdec">increment<br>decrement</a>
</td>
<td><a href="/w/cpp/language/operator_arithmetic" title="cpp/language/operator arithmetic">arithmetic</a>
</td>
<td><a href="/w/cpp/language/operator_logical" title="cpp/language/operator logical">logical</a>
</td>
<td><a href="/w/cpp/language/operator_comparison" title="cpp/language/operator comparison">comparison</a>
</td>
<td><a href="/w/cpp/language/operator_member_access" title="cpp/language/operator member access">member<br>access</a>
</td>
<td><a href="/w/cpp/language/operator_other" title="cpp/language/operator other">other</a>
</td></tr>
<tr style="text-align:center">
<td rowspan="6">
<p><span class="t-c"><span class="mw-geshi cpp source-cpp">a <span class="sy1">=</span> b<br>
a <span class="sy2">+</span><span class="sy1">=</span> b<br>
a <span class="sy2">-</span><span class="sy1">=</span> b<br>
a <span class="sy2">*</span><span class="sy1">=</span> b<br>
a <span class="sy2">/</span><span class="sy1">=</span> b<br>
a <span class="sy2">%</span><span class="sy1">=</span> b<br>
a <span class="sy3">&amp;</span><span class="sy1">=</span> b<br>
a <span class="sy3">|</span><span class="sy1">=</span> b<br>
a <span class="sy3">^</span><span class="sy1">=</span> b<br>
a <span class="sy1">&lt;&lt;=</span> b<br>
a <span class="sy1">&gt;&gt;=</span> b</span></span>
</p>
</td>
<td rowspan="6">
<p><span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="sy2">++</span>a<br>
<span class="sy2">--</span>a<br>
a<span class="sy2">++</span><br>
a<span class="sy2">--</span></span></span>
</p>
</td>
<td rowspan="6">
<p><span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="sy2">+</span>a<br>
<span class="sy2">-</span>a<br>
a <span class="sy2">+</span> b<br>
a <span class="sy2">-</span> b<br>
a <span class="sy2">*</span> b<br>
a <span class="sy2">/</span> b<br>
a <span class="sy2">%</span> b<br>
~a<br>
a <span class="sy3">&amp;</span> b<br>
a <span class="sy3">|</span> b<br>
a <span class="sy3">^</span> b<br>
a <span class="sy1">&lt;&lt;</span> b<br>
a <span class="sy1">&gt;&gt;</span> b</span></span>
</p>
</td>
<td rowspan="6">
<p><span class="t-c"><span class="mw-geshi cpp source-cpp"><span class="sy3">!</span>a<br>
a <span class="sy3">&amp;&amp;</span> b<br>
a <span class="sy3">||</span> b</span></span>
</p>
</td>
<td rowspan="6">
<p><span class="t-c"><span class="mw-geshi cpp source-cpp">a <span class="sy1">==</span> b<br>
a <span class="sy3">!</span><span class="sy1">=</span> b<br>
a <span class="sy1">&lt;</span> b<br>
a <span class="sy1">&gt;</span> b<br>
a <span class="sy1">&lt;=</span> b<br>
a <span class="sy1">&gt;=</span> b<br>
a <span class="sy1">&lt;=&gt;</span> b</span></span>
</p>
</td>
<td rowspan="6">
<p><span class="t-c"><span class="mw-geshi cpp source-cpp">a<span class="br0">[</span>b<span class="br0">]</span><br>
<span class="sy2">*</span>a<br>
<span class="sy3">&amp;</span>a<br>
a<span class="sy2">-</span><span class="sy1">&gt;</span>b<br>
a.<span class="me1">b</span><br>
a<span class="sy2">-</span><span class="sy1">&gt;</span><span class="sy2">*</span>b<br>
a.<span class="sy2">*</span>b</span></span>
</p>
</td>
<td>function call
</td></tr>
<tr style="text-align:center">
<td><span class="t-c"><span class="mw-geshi cpp source-cpp">a<span class="br0">(</span>...<span class="br0">)</span></span></span>
</td></tr>
<tr style="text-align:center">
<td>comma
</td></tr>
<tr style="text-align:center">
<td><span class="t-c"><span class="mw-geshi cpp source-cpp">a, b</span></span>
</td></tr>
<tr style="text-align:center">
<td>conditional
</td></tr>
<tr style="text-align:center">
<td><span class="t-c"><span class="mw-geshi cpp source-cpp">a <span class="sy4">?</span> b <span class="sy4">:</span> c</span></span>
</td></tr>
<tr>
<th colspan="7">Special operators
</th></tr>
<tr>
<td colspan="7">
<p><a href="/w/cpp/language/static_cast" title="cpp/language/static cast"><tt>static_cast</tt></a> converts one type to another related type <br>
<a href="/w/cpp/language/dynamic_cast" title="cpp/language/dynamic cast"><tt>dynamic_cast</tt></a> converts within inheritance hierarchies <br>
<a href="/w/cpp/language/const_cast" title="cpp/language/const cast"><tt>const_cast</tt></a> adds or removes <a href="/w/cpp/language/cv" title="cpp/language/cv">cv</a>-qualifiers<br>
<a href="/w/cpp/language/reinterpret_cast" title="cpp/language/reinterpret cast"><tt>reinterpret_cast</tt></a> converts type to unrelated type<br>
<a href="/w/cpp/language/explicit_cast" title="cpp/language/explicit cast">C-style cast</a> converts one type to another by a mix of <code>static_cast</code>, <code>const_cast</code>, and <code>reinterpret_cast</code> <br>
<a href="/w/cpp/language/new" title="cpp/language/new"><tt>new</tt></a> creates objects with dynamic storage duration<br>
<a href="/w/cpp/language/delete" title="cpp/language/delete"><tt>delete</tt></a> destructs objects previously created by the new expression and releases obtained memory area<br>
<a href="/w/cpp/language/sizeof" title="cpp/language/sizeof"><tt>sizeof</tt></a> queries the size of a type<br>
<a href="/w/cpp/language/sizeof..." title="cpp/language/sizeof..."><tt>sizeof...</tt></a> queries the size of a <a href="/w/cpp/language/parameter_pack" title="cpp/language/parameter pack">parameter pack</a> <span class="t-mark-rev t-since-cxx11">(since C++11)</span><br>
<a href="/w/cpp/language/typeid" title="cpp/language/typeid"><tt>typeid</tt></a> queries the type information of a type<br>
<a href="/w/cpp/language/noexcept" title="cpp/language/noexcept"><tt>noexcept</tt></a> checks if an expression can throw an exception <span class="t-mark-rev t-since-cxx11">(since C++11)</span><br>
<a href="/w/cpp/language/alignof" title="cpp/language/alignof"><tt>alignof</tt></a> queries alignment requirements of a type <span class="t-mark-rev t-since-cxx11">(since C++11)</span>
</p>
</td></tr></tbody></table>
<table class="t-dsc-begin">

<tbody><tr class="t-dsc">
<td colspan="2"> <div class="t-dsc-see"><span><a href="/w/c/language/operator_precedence" title="c/language/operator precedence">C documentation</a></span> for <span class=""><span>C operator precedence</span></span></div>
</td></tr>

</tbody></table>
