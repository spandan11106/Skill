`OOP` treats data as a critical element in program development. `OOP` allows decomposition of a problem into a number of entities called objects and then build data and functions around these objects.

#### Objects
Objects are the run-time entities in an object-oriented system. They may represent a person, a place, a student, a table of data or any item the program has to handle. Programming problem are analysed w.r.t. objects and the nature of communication between them. 

![[Pasted image 20260525010916.png]]

#### Classes
Objects contain data and the code to manipulate that data. The entire set of data and code of an object can be made a user-defined data type with the help of a class. Objects are variables of the type class. Once a class has been defined, we can make any number of objects to that class. 

Thus is `fruit` is a class then we can define the object `mango` as:
```cpp
fruit mango;
```

#### Data Abstraction and Encapsulation 
The wrapping up of data and functions into a single unit is known as encapsulation. The data is not accessible to the outside world, and only those functions which are wrapped in the class are able to access it. 

The attributes are sometimes called data members because they hold information. The functions that operate on these data are sometimes called methods or member functions. 

#### Inheritance
Inheritance is the process by which objects of one class acquire the properties of objects of another class. 

The real use of this property is that this allows the programmer to reuse a class that is almost, but not exactly, what he wants, and to tailor the class in such a way that it does not introduce any undesirable side - effects to the rest of the class. 

Each subclass defines only those features that are unique to it. 
![[Pasted image 20260525023546.png]]

#### Polymorphism
Polymorphism a Greek term, means the ability to take more than one form. An operation may exhibit different behaviours in different instances. The behaviour depend on the type of data used. 
$$1 + 2 = 3 \ \ \ \ \ \ \ \ \ \ '1' + '2' = '12'$$The process of making operators exhibit different behaviours in different instances is known as operator overloading. 

Similarly using a single function to perform different type of task is known as function overloading.

![[Pasted image 20260525024645.png]]

#### Dynamic Binding 
Binding refers to the linking of a procedure call to the code to be executed in response to the call. 

Consider the procedure `draw()`. By inheritance, every object will have this procedure. Its algorithm is, however, unique to each object and so the draw procedure will be redefined in each class that defines the object. At run time, the code matching the object under current reference will be called.

#### Message Passing
`OOP` involves the following :
- Creating classes that define objects and their behaviour
- Creating object from class definition
- Establishing communication among object

Objects have a life cycle. They can be created and destroyed. Communication is feasible as long as it is alive. 




