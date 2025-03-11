#ifndef Over_loading_Operators
#define Over_loading_Operators

class Over_loading_Operator{


public :

	int counter=9;
	int *ptr=&counter;
	//pre	increment
	// without pre increment
	int operator++();
	//post
	//with argument
	int operator++(int );

	//pre	decrement
	// without pre increment
	int operator--( );

	//post	decrement
	// without pre increment
	int operator--(int );

	int operator+(Over_loading_Operator obj );

	int operator-(Over_loading_Operator obj);


};


#endif
