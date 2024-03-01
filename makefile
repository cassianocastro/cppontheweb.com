# Makefile

STD=c++17
CC=g++
CCFLAGS=-W -Wall -Wextra -ansi -pedantic -std=$(STD)

OBJS=main.o filereader.o

all: $(OBJS)
	g++ $(OBJS) -o main.exe

main.o: ../main.cpp
	$(CC) $(CCFLAGS) -c ../main.cpp -o main.o

filereader.o: ../lib/FileReader.cpp
	$(CC) $(CCFLAGS) -c ../lib/FileReader.cpp -o filereader.o

clean:
	rm -rf *.o *~