all: arrayz.o basketball

arrayz.o: arrayz.c 
	gcc -Wall -Werror -std=c11 -c arrayz.c

basketball: basketball.c
	gcc -Wall -Werror -std=c11 -o basketball basketball.c arrayz.o

clean:
	rm arrayz.o
	rm basketball
