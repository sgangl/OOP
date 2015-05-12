#include <iostream>
#include <string>
#include "Dog.h"

using namespace std;

int main(int argc, char *argv[])
{
	Dog	myDog;

	myDog.setName("Zeus");
	myDog.setHasShots(true);
	myDog.setBreed("Welsh Corgi");
	myDog.setAge(3);
	myDog.setTagNumber(19);
	myDog.setOwner("Sean");

	myDog.printDog();
}
