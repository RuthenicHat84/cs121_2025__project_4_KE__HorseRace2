#include <iostream>
#include "horse.h"
//#include "race.h"
int main(){
	Horse a;
	std::cout<<"Hello" << std::endl;
	
	a.init(0,14);
	a.printLane();

	return 0;
} // end main
