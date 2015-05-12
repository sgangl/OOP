CC = g++
CFLAGS = -g -Wall -std=c++11

TestDog: Dog.o main.o
	$(CC) $(CFLAGS) Dog.o main.o -o TestDog

Dog.o: Dog.h Dog.cpp
	$(CC) $(CFLAGS) -c Dog.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) TestDog *.o