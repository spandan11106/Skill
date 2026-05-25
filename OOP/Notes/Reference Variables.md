A reference variable provides an alias for a previously defined variable. For example, if we make the variable `sum` a reference to the variable `total`, then `sum` and `total` can be used interchangeably to represent the variable. 
```cpp
float total = 100;
float & sum = total;
```
If we print both `sum` and `total` values, we will get the same value.

```cpp
total = total + 10
```
This will change the value of both `total` and `sum` to 110. Likewise if we set `sum = 0` then total will also be set to zero.

A reference variable must be initialised at the time of declaration. This establishes the correspondence between the reference and the data object which it names. 

```cpp
int x;
int *p = &x;
int & m = *p;
```
This causes `m` to refer to `x` which is pointer to by the pointer `p`. 