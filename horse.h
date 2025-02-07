//horse.h start

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <string>

class Horse {
	private:
	  int pos;
	  int id;
	  int trackLength;
	public:
	  Horse();
	  void init(int id, int trackLength);
	  void advance();
	  void printLane();
	  bool isWinner();
}; // end class def

#endif
// horse.h end
