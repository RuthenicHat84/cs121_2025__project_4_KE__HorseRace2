#include <iostream>
#include <random>
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
/*
void Horse::advance(){
	int coin = 100
	
	std::random_device rd;
  	std::uniform_int_distribution<int> dist(0, 1);
	coin = dist(rd);

	Horse::position += coin;

} // end advance
*/
void Horse::printLane(){
	char track[Horse::trackLength];
	int pos = Horse::position;
	for(int i = 0; i < Horse::trackLength; i++){
		if (i == Horse::position){
			track[i] = std::to_string(Horse::position);
			std::cout << track[i];
		} // end if
		else{
			track[i] = '.';
			std::cout << track[i];
			
		} // end else
	} // end for
	std::cout << std::endl; 
} // end printLane
