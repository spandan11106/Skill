We can use the `const` modifier alone, it defaults to `int`. C++ required `const` to be initialised. A `const` in C++ defaults to internal linkage and therefore it is local to the file where it is declared.

To give a `const` value an external linkage we do the following:
```cpp
extern const total = 100;
```

Another method of naming integer constants is by enumeration.
```cpp
enum {X, Y, Z};
```
This defines X, Y, and Z as integer constant with values 0, 1 and 2 respectively. This is equivalent to :
```cpp
const X = 0;
const Y = 1;
const Z = 2;
```

This also works :
```cpp
enum{X = 100, Y = 50, Z = 200};
```

