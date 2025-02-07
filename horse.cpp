#include <iostream>
#include "horse.h"

Horse::Horse(){

	Horse::position = 0;
	Horse::id = -1;
	Horse::trackLength = 15;

} // end constructor

void Horse::init(int id, int trackLength){

	Horse::position = 0;
	Horse::id = id;
	Horse::trackLength = trackLength;
} // end init

int Horse::printLane(){
	return position, id, trackLength;
} // end printLane
