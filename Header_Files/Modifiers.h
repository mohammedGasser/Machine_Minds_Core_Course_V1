
#ifndef Modifiers
#define Modifiers


//volatile
//volatile can be used input or output the class
volatile void volatile_fuction(void);


//virtual must use in the class
// you have error virtual class declaration

//virtual void virtual_function(void);
//Virtual functions cannot be static.
//A virtual function can be a friend function of another class.
//Virtual functions should be accessed using
//a pointer or reference of base class type to achieve runtime polymorphism.
//The prototype of virtual functions should be the same in the base as well as the derived class.

class Modifiers_{
public:
	static int static_variable;

	///we can static function without make object ///
	static int static_function(int a ,int b);

};
#endif
