
#include <string>
//you must write using namespace when use string
using namespace std;
#include "../Header_Files/Over_Loading_Methods.h"

int add(int op1,int op2)
 {
     	return op1+op2;
     }


float add(int op1,float op2)
 {
     	return op1+op2;
 }
int add(float op2,int op1)
 {
     	return op1+op2;
 }

	int add(int op1,int op2, int op3)
	{
	    	return op1+op2;
	    }
    float add(float op1,float op2){
    	return op1+op2;
    }
    string add(string op1,string op2)
    {
          return op1+" "+op2;
    }
