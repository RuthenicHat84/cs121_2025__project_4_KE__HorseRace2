//race.h start

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		static const int TRACKLENGTH;
		static const int RACERLIMIT = 5;
		Horse racers[RACERLIMIT];
	private:
		Race();
		void Run();
}; // end class def

#endif

//race.h end
