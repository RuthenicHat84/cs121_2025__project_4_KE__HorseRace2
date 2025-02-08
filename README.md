# CS121_2025__Project_4_KE__HorseRace2

Horse Race but in OOP

a collection of 5 horses (can be changed by altering the values in the code) race down a track that is 15 units long (also changable). the first one to cross over the finish wins. This program is compiled with multiple files, and comes with a makefile for easy creation of the game and debugging. 


# ULM

## See HorseRace2.png for ULM

### Two classes were used (Horse) and (Race). the Race class is dependent on the Horse class to function.
### Horse Variables
* int position
* int id
* int trackLength
### Race Variables
* static const int TRACKLENGTH 
* static const int RACERLIMIT
* array racers[] with size of RACERLIMIT



# Horse Class

## void Advance(){
* generates a coin toss, where 1 lets racers advance, and 0 keeps them in place
```

create int coin

create random device rd and roll either 0 and 1

coin = dist(rd)

horse position += coin

```
## }


## void PrintLane(){
* prints the lane procedurally, replacing the track with the horse's id at the horse's position.
```

create track array with the length of trackLength
if (horse is not at current position):
	place a "."
else:
	place the horse id

```
## }


## bool isWinner(){
* checks if the horse has won the race, and prints a victory statement if so.
```

if(horse is at end of track):
	print victory statement
	return true
else:
	return false

```
## }





# Race Class

## void Run(){
* initializes the racers, and runs them through the race step-by-step. (if you want to remove the requirements for user input, comment out the continue output and input lines)
```
for(every racer):
	initialize the racer with the Horse Class

create a boolean running = true
while (running):
	print continue prompt
	wait for input from user
	
	for(every racer):
		if(current racer has won the race):
			set running = false
		else:
			print the lane of the current racer
			advance the current racer

```
## }
