CC=g++

all: test hello_world main

.PHONY: clean test

test: hello_world


main: test main.cpp 
	$(CC) --std=c++11 -o hello_world main.cpp hello_world.o 

hello_world: hello_world.h hello_world.cpp
	$(CC) -c hello_world.cpp

clean:
	rm *.o
