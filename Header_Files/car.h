/*
 * car.h
 *
 *  Created on: Dec 18, 2024
 *      Author: mohamed
 */

#include <string>
using namespace std;
#ifndef CAR_H_
#define CAR_H_

class car {
private:
	//..\src\OOP_CPP_Course.cpp:17:30: error: 'int car::car_min_speed' is private within this context
	//int private_result=sum(4,c1.car_min_speed);
	//private attributes can be accessed by own class
	///by any private or public functions(mathods)
	int car_min_speed;

public:
	///any thing public can accessed by any thing out of class
	int car_max_speed;
	//you need #include <string> and using namespace std
    string car_name;


	void Car_Set_Min_Speed(unsigned char speed);
	int Car_Get_Min_Speed(void);

	//constructor will be executed at first without
	//just you create an object just constructor will executed
	//we you make an object you must pass a parameters
	//car c1 (mx_spd,mn_spd,name)


	car Car_exhibition(car c1,car c2);
	car(int max_spd,int min_spd,string car_name_);
	car();

	virtual ~car();



};

#endif /* CAR_H_ */
