# Makefile

CCFLAGS=-W -Wall -ansi -pedantic

all: main.o
	gcc main.o -o a.out

main.o: main.c
	gcc -c $(CCFLAGS) main.c

clean:
	rm -rf *.o *~