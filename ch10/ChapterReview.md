####Name: Ahmed Mostafa Soliman


####Section: 1


####Bench Number: 33709



#Assignment 1
###1. What is a class?


a class is an extensible program-code-template for creating objects, providing initial values for state (member variables) and implementations of behavior (member functions or methods).


###2. How does a class accomplish abstraction, encapsulation, and data hiding?


Using keywords like public and private and protected we describe the access control for class members.
 A program can access the private members of an object only by using the public member functions or via a friend function.
The public member functions act as go-betweens between a program and an object’s private members; they provide the interface between object and program. This insulation of data from direct access by a program is called data hiding.
A class design attempts to separate the public interface from the specifics of the implementation.
The public interface represents the abstraction component of the design.
Gathering the implementation details together and separating them from the abstraction is
Called encapsulation.


###3. What is the relationship between an object and a class?


An object is an instance of a class.


###4. In what way, aside from being functions, are class function members different from class data members?


Each object holds its own copies of the data portion of a class declaration, but they
share the class methods.


###5. Define a class to represent a bank account. Data members should include the depositor’s name, the account number (use a string), and the balance. Member functions should allow the following:  Creating an object and initializing it. Displaying the depositor’s name, account number, and balance depositing an amount of money given by an argument withdrawing an amount of money given by an argument Just show the class declaration, not the method implementations.
 

Solution provided in programming exercise 1


###6. When are class constructors called? When are class destructors called?


Class constructors are called on creating objects, while destructors are called automatically when the program terminates if you create a static storage object , If you create an automatic storage class object , its destructor is called automatically when the program exits the block of code in which the object is defined.


###7. Provide code for a constructor for the bank account class 


Solution provided in programming exercise 1.



###8. What is a default constructor? What is the advantage of having one? 


A default constructor is a constructor that is used to create an object when you don’t provide explicit initialization values the advantage of having one is you don’t have to initialise the object member variables with anything and if you fail to provide any default constructor the compiler will automatically supply a default constructor.


###9. Modify the Stock class definition (the version in stock20.h) so that it has member functions that return the values of the individual data members. 


Solution provided in stock20.h


###10. What are this and *this?


this is a pointer points to the used object , using the * operator before this pointer is called dereferencing the pointer which yields the value which this pointer points.
