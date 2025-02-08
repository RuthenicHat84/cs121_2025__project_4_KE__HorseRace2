// race.cpp start

#include "race.h"


Race::Race(){
	Race::TRACKLENGTH = 15;
	Race::horses[RACERLIMIT] = Horse();

} // end constructor


void Race::Run(){
	bool running = true;
	while(running){
		
		std::cout << "Press Enter to continue" << std::endl;
		std::cin.get();

		for(int i = 0; i < Race::RACERLIMIT; i++){

			if(racers[i].Horse::isWinner()){
				running = false;
			} // end for
			else{
				horses[i].Horse::advance();
				[i].Horse::printLane();
			} // end else

		} // end for

	} // end while

} // end run

// race.cpp end
