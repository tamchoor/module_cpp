                      # C++ - Module 01

Memory allocation, pointers to members, references, switch statement

                 Exercise 00: BraiiiiiiinnnzzzZ


 Turn-in directory : ex00/

Forbidden functions : None

Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp  

First, implement a Zombie class. It has a string private attribute name.

Add a member function void announce( void ); to the Zombie class. Zombies announce themselves as follows:

    <name>: BraiiiiiiinnnzzzZ...

Then, implement the two following functions:

• Zombie* newZombie( std::string name );

It creates a zombie, name it, and return it so you can use it outside of the function scope.

• void randomChump( std::string name );

It creates a zombie, name it, and the zombie announces itself.
Now, what is the actual point of the exercise? You have to determine in what case it’s better to allocate the zombies on the stack or heap.

Zombies must be destroyed when you don’t need them anymore. The destructor must print a message with the name of the zombie for debugging purposes.


            Exercise 01: Moar brainz!

Turn-in directory : ex01/

Forbidden functions : None

Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp

Time to create a horde of Zombies!

Implement the following function in the appropriate file:
    Zombie*    zombieHorde( int N, std::string name );

It must allocate N Zombie objects in a single allocation. Then, it has to initialize the zombies, giving each one of them the name passed as parameter. The function returns a pointer to the first zombie.

Implement your own tests to ensure your zombieHorde() function works as expected. Try to call announce() for each one of the zombies.

Don’t forget to delete all the zombies and check for memory leaks.


Exercise : 02

HI THIS IS BRAIN Files to turn in : Makefile, main.cpp

Turn-in directory : ex02/ Forbidden functions : None

Write a program that contains:

• A string variable initialized to "HI THIS IS BRAIN". • stringPTR: A pointer to the string.

• stringREF: A reference to the string.

Your program has to print:

• The memory address of the string variable. • The memory address held by stringPTR.

• The memory address held by stringREF.

And then:

• The value of the string variable.

• The value pointed to by stringPTR. • The value pointed to by stringREF.

That’s all, no tricks. The goal of this exercise is to demystify references which can seem completely new. Although there are some little differences, this is another syntax for something you already do: address manipulation.


                 Exercise : 03 Unnecessary violence

Turn-in directory : ex03/

Forbidden functions : None

Files to turn in : Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h, hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp

Implement a Weapon class that has:

• A private attribute type, which is a string.

• A getType() member function that returns a const reference to type.

• A setType() member function that sets type using the new one passed as param- eter.

Now, create two classes: HumanA and HumanB. They both have a Weapon and a name. They also have a member function attack() that displays (of course, without the angle brackets):

    <name> attacks with their <weapon type>


HumanA and HumanB are almost the same except for these two tiny details: 

• While HumanA takes the Weapon in its constructor, HumanB doesn’t.

• HumanB may not always have a Weapon, whereas HumanA will always be armed.

            Exercise : 04 Sed is for losers

Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}

Turn-in directory : ex04/

Forbidden functions : std::string::replace


Create a program that takes three parameters in the following order: a filename and two strings, s1 and s2.

It will open the file <filename> and copies its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.

Using C file manipulation functions is forbidden and will be considered cheating. All the member functions of the class std::string are allowed, except replace. Use them wisely!

Of course, handle unexpected inputs and errors. You have to create and turn in your own tests to ensure your program works as expected.



                Exercise : 05 Harl 2.0
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp

Turn-in directory : ex05/

Forbidden functions : None


Do you know Harl? We all do, do we? In case you don’t, find below the kind of comments Harl makes. They are classified by levels:

• "DEBUG" level: Debug messages contain contextual information. They are mostly used for problem diagnosis.

Example: "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"

• "INFO" level: These messages contain extensive information. They are helpful for tracing program execution in a production environment.

Example: "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"

• "WARNING" level: Warning messages indicate a potential issue in the system. However, it can be handled or ignored.

Example: "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."

• "ERROR" level: These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention.

Example: "This is unacceptable! I want to speak to the manager now."
You are going to automate Harl. It won’t be difficult since it always says the same things. You have to create a Harl class with the following private member functions:

• void debug( void );

• void info( void );

• void warning( void ); 

• void error( void );

Harl also has a public member function that calls the four member functions above depending on the level passed as parameter:

    void    complain( std::string level );

The goal of this exercise is to use pointers to member functions. This is not a suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think twice!

Create and turn in tests to show that Harl complains a lot. You can use the example comments.


                    Exercise : 06 Harl filter
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp

Turn-in directory : ex06/ 
 
Forbidden functions : None

Sometimes you don’t want to pay attention to everything Harl says. Implement a system to filter what Harl says depending on the log levels you want to listen to.

Create a program that takes as parameter one of the four levels. It will display all messages from this level and above.

Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off.

Give the name harlFilter to your executable.

You must use, and maybe discover, the switch statement in this exercise.