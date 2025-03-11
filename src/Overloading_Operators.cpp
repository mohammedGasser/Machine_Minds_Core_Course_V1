
#include "../Header_Files/Overloading_Operators.h"

///prefix increment /
int Over_loading_Operator::operator++()
{

	return ++counter;
}

///postfix increment /
int Over_loading_Operator::operator++(int )
{
	int *tempo =ptr;
	counter++;
	return *tempo;
}


///prefix decrement /
int Over_loading_Operator::operator--()
{
	return --counter;
}


///postfix decrement /
int Over_loading_Operator::operator--(int)
{
	 int *temp=ptr;
	 counter++;
	 return *temp;

}


///plus///
int Over_loading_Operator::operator+(Over_loading_Operator obj)
{

	return counter+obj.counter;
}


///sub///
int Over_loading_Operator::operator-(Over_loading_Operator obj)
{

	return counter-obj.counter;
}

