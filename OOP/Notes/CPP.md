Let us start with a simple function: 
```cpp
#include <iostream>
using namespace std;

int main(){
   cout << "Heelo World \n";
   return 0;
}
```

> [!note] 
> I have done this part so the notes are going to be short

`cin` can read only one word and therefore we cannot use names with blank spaces. To take sentence as input use `cin.getline(var, size)` 

```cpp
#include <iostream>
using namespace std;

class person {
   char name[30];
   int age;
   
   public:
     void getdata(void);
     void display(void);
};

void person :: getdata(void){
   cout << "Enter name: ";
   cin >> name;
   cout << "Enter age: ";
   cin >> age;
}

void person :: display(void){
   cout << "\nName: " << name;
   cout << "\nAge: " << age;
}

int main() {
   person p;
   
   p.getdata();
   p.display();
   
   return 0;
}
```

>[!tip]
>Good code practices involve making 3 different files. One the header file while has class definitions, one file which defines the member function and one file which executes all of this.
>![[Pasted image 20260525035810.png]]


The `wchar_t` type is a wide-character literal introduced by `ANSI` C++ and is intended for character sets that cannot fit a character into a single byte. Wide - character literals begin with the letter `L`
```cpp
char example = L'ab';
```

[[Data Types]] [[Reference Variables]] 