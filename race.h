//race.h start

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		static int TRACKLENGTH;
		const int RACERLIMIT;
		Horse racers[RACERLIMIT];
	private:
		Race();
		void run();
} // end class def

#endif

//race.h end
