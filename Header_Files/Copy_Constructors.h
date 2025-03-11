
#include <string>
using namespace std;
#ifndef Copy_Constructors_H
#define Copy_Constructors_H


class Copy_Constructors
{
public :
	int watch_Price;
	string watch_name;
    int Original_Level_;
	enum{
		Copy,
		High_Copy,
		Original
	}Original_Level;
	Copy_Constructors(int price,string name,int Original_Level_);
    Copy_Constructors();
	~Copy_Constructors();
};


#endif
