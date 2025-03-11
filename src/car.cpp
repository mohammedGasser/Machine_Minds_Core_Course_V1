/*
 * car.cpp
 *
 *  Created on: Dec 18, 2024
 *      Author: mohamed
 */

#include <iostream>
#include <string>
#include "../Header_Files/car.h"

void car::Car_Set_Min_Speed(unsigned char speed)
{
	car_min_speed=speed;
}

int car::Car_Get_Min_Speed(void)
{
   return 	car_min_speed;
}



car car::Car_exhibition(car c1,car c2)
{
	car cr;


	return cr;
}


//you can make Initailize  list before constructor brackets
car::car(int max_spd,int min_spd,string car_name_): car_max_speed(max_spd),car_min_speed(min_spd),car_name(car_name_)
{
	// TODO Auto-generated constructor stub
	//car_max_speed=255;
	//car_min_speed=50;
	std::cout<<"Welcome to car class";



}
//
car::car()
{

cout<<"hello";
car_max_speed=350;
car_min_speed=80;
}
car::~car() {

	// TODO Auto-generated destructor stub

   cout<<"Good bye";
}

