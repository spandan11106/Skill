#### Arrays
```cpp
char string[4] = "xyz";
```
Size should be one larger then the number of characters. 

#### Pointers
```cpp
int *ip;      // int pointer
ip = &x;      // address of x assigned to ip
*ip = 10;     // 10 assigned to x through indirection
```

C++ also adds the concept of constant pointer and pointer to a constant
```cpp
char* const ptr1 = "GOOD"   // constant pointer
```
We cannot modify the address that `ptr1` is initialised to.

```cpp
int const * ptr2 = &m;   // pointer to a constant
```
`ptr2` can point to any variable of the correct type, but the contents of what it points to cannot be changed. 

