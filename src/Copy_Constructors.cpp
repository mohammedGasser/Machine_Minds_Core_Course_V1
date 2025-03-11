#include <string>
#include "../Header_Files/Copy_Constructors.h"




Copy_Constructors::Copy_Constructors(){
	watch_Price=2500;
	watch_name="Rolex";
	Original_Level_=2;


}

Copy_Constructors::Copy_Constructors(int price,string name,int Original_Level_):watch_Price(price),watch_name(name),Original_Level_(Original_Level_)
{

	//Original_Level=2;


}

Copy_Constructors::~Copy_Constructors(){



}
