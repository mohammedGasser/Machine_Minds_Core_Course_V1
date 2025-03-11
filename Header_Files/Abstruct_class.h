#include "stdio.h"
//you can make an object from this class
//because its abstruct class
//has a pure virtual function

class Abstruct_class{

public:


	virtual int v_f(void)=0;

};

class derived_c:public  Abstruct_class
{

	int v_f (void)
	{
		printf("virtual function");
	}

};
