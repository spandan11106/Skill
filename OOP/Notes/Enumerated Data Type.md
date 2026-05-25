This is another user-defined data type which provides a way for attaching names to numbers, thereby increasing comprehensibility of the code. The **`enum`** keyword automatically enumerates a list of words by assigning them values 0, 1, 2 and so on. 
```cpp
enum shape{circle, square, triangle};
enum colour{red, blue, green, yellow};
enum position{off, on};
```

The tags `shape`, `colour` and `position` become new type names. By using them we can declare new variables. 
```cpp
shape ellipse;              // ellipse is of type shape
colour background;          // background is of type colour   
```

In C++ each enumerated data type retains its own separate type. 
```cpp
colour background = blue;     // allowed
colour background = 7;        // Error in C++
colour background = (colour) 7;
```

However an enumerated value can be used in place of an `int` value.
```cpp
int c = red;     // valid, colour type promoted to int
```

```cpp
enum colour{red, blue = 4, green = 8};
enum colour{red = 5, blue, green};
```
The above examples are valid. In case 1, `red` is 0 by default. In case 2, `blue` is 6 and `green` is 7.


```cpp
enum{off, on};

int switch_1 = off;
int switch_2 = on;
```

In C++, an `enum` defined within a class (or structure) is local to it only. 

