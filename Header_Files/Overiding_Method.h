#include <iostream>
using namespace std;
#ifndef Over_rriding
#define Over_rriding


///you can write same function with all things(overriding) but
/// you have a derived class from base class
/// make an object from derived class so you can use
/// dervied function
///if you dont use override keyword you can override the base function
///but if you use the override keyword you must over write only virtual functions
//simple example
class Base {

public :
	void over_rriding_test(void );
};

class derived: public  Base{
public :
	///ovedr rriding is rewrite function identical every thing
	///when you make am object from derived class
	///derived function will be executed not base function
	void over_rriding_test(void ){
		Base::over_rriding_test();
	}
};

///professional example

class virt_base_{


     public:
	virt_base_();
	///if you use pointer to base class
	///you must use virtual
	//if you dont use it the base function will be implementsd instead of virtual
	  virtual void print()
	    {
	    	cout<<"\nvirt_base_\n";
	    }
};
class virt_derived_:public virt_base_{
	void print()override
	{
		cout<<"virt_derived_";
	}
};


#endif
