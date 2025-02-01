# cs121_2025__project_4_KE__HorseRace2
Recreation of Horse Race with OOP


Object Oriented Programming Recreation of Horse Race



include iostream

include random

## Global Variables -
//the variables that are used by multiple classes, and are constant integers.
```

CONST int TRACKLENGTH set to 15
CONST int MAXHORSES set to 5

```

## Classes -
### Horse {
//stores data of the horses, and their progression algorithm.
```

Functions included from project 3: advance() & isWinner()
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

public:
horse(int horseNum, position(0))
----
//make random number generator and add it to position
void advance() {
        std::random_device rd;
        std::uniform_int_distribution<int> dist(0, 1);
        position += dist(rd);
}
----
int get_position() {
	return value of position
}
int get_horseNum() {
	return value of horseNum
}
----
bool isWinner() {
	return if position >= TRACKLENGTH - 1 is true or false;
}
----
private:

```

### Race {
//stores the data for running the race and printing.
```

Functions included from project 3: printLane() & previous main()
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

public:

```
## Main() -
//calls the classes and functions, and that's it.
```

call Race class
return 0

```
