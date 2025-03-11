//============================================================================
// Name        : OOP_CPP_Course.cpp
// Author      : Machine Minds /Mohamed Gasser
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "../Header_Files/car.h"
#include "../Header_Files/Simple_Functions.h"
#include "../Header_Files/Copy_Constructors.h"
#include "../Header_Files/Overiding_Method.h"
#include "../Header_Files/Modifiers.h"
#include "../Header_Files/Overloading_Operators.h"
#include "../Header_Files/Inheritance.h"
#include "../Header_Files/Multible_Inheritance.h"
#include "../Header_Files/Abstruct_class.h"
using namespace std;

int main() {

	car c1(255,30,"Porch");
	int public_result=sum(5, c1.car_max_speed);
	c1.Car_Set_Min_Speed(100);
	c1.car_max_speed=90;
	int private_result=c1.Car_Get_Min_Speed();
	//Copy_Constructors Watch1(2000,"Rolex",2);
	Copy_Constructors w1(4000,"Rolex",2);
	Copy_Constructors w2(w1);
	w1.watch_Price=3000;

	string c="hello world";

	//Watch1.watch_Price=3000;
	cout<<public_result<<"  "<<private_result<<"\n" ;
	cout<<w2.watch_name<<" "<<w2.watch_Price;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	derived test;
	test.over_rriding_test();

	//you can use static function without make any object

	printf("Modifiers_::static_function(3,4)=%d",Modifiers_::static_function(3,4));

	Over_loading_Operator operator_object_1,operator_object_2;
	//operator_object_1;
	operator_object_2.counter=9;
	printf("operator_object++=%d",operator_object_1++);
	printf(" operator_object plus += ",operator_object_1+(operator_object_2) );
    Inheritance_Chiled_Derived_student s1;
    s1.set_Academic_specialization(Inheritance_Parent_Base_Person::computer);
    string b =s1.get_Academic_specialization();
    cout<<b;
    company company1;

    company1.display();
    ///to use virtual
    //make ptr to base class
    //you access by it derived
    //ptr=&derived;
    //ptr->attribute/methode
    virt_base_ * b_ptr;
    virt_derived_ derived_;
    b_ptr=&derived_;
    b_ptr->print();
    Abstruct_class *AB_C;





    return 0;




}
