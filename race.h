//race.h start

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		static const int TRACKLENGTH;
		const int RACERLIMIT;
		Horse racers[RACERLIMIT];
	private:
		Race();
		void Run();
}; // end class def

#endif

//race.h end
