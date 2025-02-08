// race.cpp start

#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
	Race::racers[RACERLIMIT] = Horse();

} // end constructor


void Race::Run(){
	
	bool running = true;

	for (int i = 0; i < Race::RACERLIMIT; i++){
		Race::racers[i].init(i, TRACKLENGTH);
	} // end for

	while(running){
		
		std::cout << "Press Enter to continue" << std::endl;
		std::cin.get();

		for(int i = 0; i < Race::RACERLIMIT; i++){

			if(Race::racers[i].isWinner()){
				running = false;
			} // end for
			else{
				Race::racers[i].printLane();
				Race::racers[i].advance();
			} // end else

		} // end for

	} // end while

} // end run

// race.cpp end
