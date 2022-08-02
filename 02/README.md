                      # C++ - Module 02

Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form


From now on, all your classes must be designed in the Orthodox Canonical Form, unless explicitely stated otherwise. Then, they will implement the four required member functions below:

• Default constructor

• Copy constructor

• Copy assignment operator

• Destructor

Split your class code into two files. The header file (.hpp/.h) contains the class definition whereas the source file (.cpp) contains the implementation.

         Exercise 00: My First Class in Orthodox Canonical Form

Turn-in directory : ex00/

Files to turn in : Makefile, main.cpp, Fixed.{h, hpp}, Fixed.cpp

Create a class in Orthodox Canonical Form that represents a fixed-point number: 

• Private members:

◦ An integer to store the fixed-point number value.

◦ A static constant integer to store the number of fractional bits. Its value will always be the integer literal 8.

• Public members:

◦ A default constructor that initializes the fixed-point number value to 0.

◦ A copy constructor. 

◦ A copy assignment operator overload.

◦ A destructor.

◦ A member function int getRawBits( void ) const; that returns the raw value of the fixed-point value.

◦ A member function void setRawBits( int const raw ); that sets the raw value of the fixed-point number.

![] !!!!!!!!!!!!!!!!

        Exercise 01: Towards a more useful fixed-point number class

Turn-in directory : ex01/

Files to turn in : Makefile, main.cpp, Fixed.{h, hpp}, Fixed.cpp 

Allowed functions : roundf (from <cmath>)


The previous exercise was a good start but our class is pretty useless. It can only represent the value 0.0.

Add the following public constructors and public member functions to your class:

• A constructor that takes a constant integer as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value is initialized to 8 like in exercise 00.

• A constructor that takes a constant floating-point number as a parameter.

It converts it to the corresponding fixed-point value. The fractional bits value is initialized to 8 like in exercise 00.

• A member function float toFloat( void ) const;

that converts the fixed-point value to a floating-point value.

• A member function int toInt( void ) const;

that converts the fixed-point value to an integer value.

And add the following function to the Fixed class files:

• An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter.

                Exercise 02 Now we’re talking

Files to turn in : Makefile, main.cpp, Fixed.{h, hpp}, Fixed.cpp

 Turn-in directory : ex02/

Allowed functions : roundf (from <cmath>)

Add public member functions to your class to overload the following operators:

• The 6 comparison operators: >, <, >=, <=, == and !=.

• The 4 arithmetic operators: +, -, *, and /.

• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators, that will increase or decrease the fixed-point value from the smallest representable ε such as 1 + ε > 1.

Add these four public overloaded member functions to your class:

• A static member function min that takes as parameters two references on fixed-point numbers, and returns a reference to the smallest one.

• A static member function min that takes as parameters two references to constant fixed-point numbers, and returns a reference to the smallest one.

• A static member function max that takes as parameters two references on fixed-point numbers, and returns a reference to the greatest one.

• A static member function max that takes as parameters two references to constant fixed-point numbers, and returns a reference to the greatest one.

                    Exercise 03  BSP

Turn-in directory : ex03/

Files to turn in : Makefile, main.cpp, Fixed.{h, hpp}, Fixed.cpp, Point.{h, hpp}, Point.cpp, bsp.cpp

 Allowed functions : roundf (from <cmath>)

Now that you have a functional Fixed class, it would be nice to use it.

Implement a function which indicates whether a point is inside of a triangle or not. Very useful, isn’t it?


Let’s start by creating the class Point in Orthodox Canonical Form that represents a 2D point:

• Private members:

◦ A Fixed const attribute x. ◦ A Fixed const attribute y. ◦ Anything else useful.

• Public members:

◦ A default constructor that initializes x and y to 0.

◦ A constructor that takes as parameters two constant 
floating-point numbers. It initializes x and y with those parameters.

◦ A copy constructor.

◦ A copy assignment operator overload.

◦ A destructor.

◦ Anything else useful.

To conclude, implement the following function in the appropriate file:

    bool bsp( Point const a, Point const b, Point const c, Point const point);

• a, b, c: The vertices of our beloved triangle.

• point: The point to check.

• Returns: True if the point is inside the triangle. False otherwise. Thus, if the point is a vertex or on edge, it will return False.

Implement and turn in your own tests to ensure that your class behaves as expected.
