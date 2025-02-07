horseRace2: horse.o race.o main.o
	g++ -g horse.o race.o main.o -o horseRace2

main.o: horse.h race.h main.cpp 
	g++ -c -g main.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

race.o: horse.h race.h race.cpp
	g++ -c -g race.cpp

clean:
	rm *.o
	rm horseRace2

run: horseRace2
	./horseRace2

debug: horseRace2
	gdb horseRace2
