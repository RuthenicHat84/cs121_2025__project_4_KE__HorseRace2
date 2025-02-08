//race.h start

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		static const int TRACKLENGTH = 15;
		static const int RACERLIMIT = 5;
		Horse racers[RACERLIMIT];
	public:
		Race();
		void Run();
}; // end class def

#endif

//race.h end
