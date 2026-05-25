![[Pasted image 20260525043938.png]]
With the exception of **void**, the basic data type has several modifiers. The modifiers **signed, unsigned, long** and **short** may be applied to character and integer basic data types. 

Modifier **long** may also be applied to **double**. 

The `ANSI` C++ also has added two more data types `bool` and `wchar_t`. 

>[!info]
>One interesting use of void is in the declaration of generic pointers. 
>```cpp
>void *gp;
>```
>A generic pointer can be assigned a pointer value of any basic data type, but it may not be de-referenced. We need to type cast it first before assigning. 
>```cpp
>void* ptr1
>char* ptr2;
>ptr2 = ptr1;  // This statement is not allowed in cpp, even though it is in C
>ptr2 = (char *)ptr1;  // This is the correct way
>```

[[User-Defined Data Types]]  [[Derived Data Type]]  [[const]] 