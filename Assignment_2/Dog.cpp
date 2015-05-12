#include "Dog.h"

using namespace std;

Dog::Dog()
{
	name = "UNSET";
	hasShots = false;
	breed = "DOG";
	age = -1;
	tagNumber = -1;
	owner = "NONE";
}

string Dog::getName()
{
	return name;
}

bool Dog::getHasShots()
{
	return hasShots();
}

string Dog::getBreed()
{
	return breed;
}

int Dog::getAge()
{
	return age;
}

int Dog::getTagNumber()
{
	return tagNumber;
}

string Dog::getOwner()
{
	return owner;
}

void Dog::setName(const string& nuName)
{
	name = nuName;
}

void Dog::setHasShots(const string& nuHasShots)
{
	hasShots = nuHasShots;
}

void Dog::setBreed(const string& nuBreed)
{
}

void Dog::setAge(const int& nuAge)
{
}

void Dog::setTagNumber(const int& nuTagNumber)
{
	tagNumber = nuTagNumber;
}

void Dog::setOwner(const string& nuOwner)
{
	owner = nuOwner;
}

void Dog::printDog() const
{
	cout << "This is " << name;
	cout << ". " << name " is a " << breed << endl;
	cout << name << " is owned by " << owner;
	if (hasShots) cout << " and has had its shots." << endl;
	else cout << " and has not had his shots." << endl;
	cout << name << " is " << age << " years old.";
	cout << " " << name "'s registration number is: " << tagNumber << endl;
}
