game: main.o horse.o race.o
	g++ -g main.o horse.o race.o -o game

main.o: horse.h race.h main.cpp
	g++ -c -g main.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

race.o: race.h horse.h race.cpp
	g++ -c -g race.cpp

clean:
	rm *.o
	rm game

run: game
	./game

debug: game
	gdb game
