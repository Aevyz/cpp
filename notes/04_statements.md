# Statements

## Types

### Declaration

`int i = 0; //Declare i`

### Expression

`i + 3; // Relatively useless`
`foo(); // Possibly useful` 

### Compound Statement

```c++
{
    int a = 1;
    int b = 2;
}
```

## If Statements
```cpp
if (init_statement; condition)
    then_statement
else
    else_statement
```

Note that brackets are not required, but else will associate itself with the nearest if without else

```cpp
if (cond0)
    if (cond1)
else // despite indent, associated with cond1
```

## Switch Statement

```cpp
switch(computeVal()){
    case 1:
        doBla();
    case 2: 
        doBla2();
        break;
    default:
        doDefaultBla();
        break;
}
```

Note that without a break, the code goes further, so in case 1, doBla() and doBla2() will be executed.

## While Loop

Tl;Dr Do While loops at least once

```c++
while(condition){ //Evaluate Pre Statement Execution
    //Stuff
}
```

```c++
do{
    //Stuff
}
while(condition); //Evaluate Post Statement Execution
```
