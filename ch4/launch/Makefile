.DEFAULT_GOAL := launch
launch.o: launch.c launch.h thruster.h
	gcc -c launch.c

thruster.o: thruster.c thruster.h
	gcc -c thruster.c

launch: launch.o thruster.o
	gcc -o launch launch.o thruster.o

.PHONY:
clean:
	-rm *.o launch
