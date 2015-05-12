#include "Dog.h"
#include <iostream>

Dog::Dog()
{
	name = "UNSET";
	hasShots = false;
	breed = "DOG";
	age = -1;
	tagNumber = -1;
	owner = "NONE";
}

std::string Dog::getName() const
{
	return name;
}

bool Dog::getHasShots() const
{
	return hasShots;
}

std::string Dog::getBreed() const
{
	return breed;
}

int Dog::getAge() const
{
	return age;
}

int Dog::getTagNumber() const
{
	return tagNumber;
}

std::string Dog::getOwner() const
{
	return owner;
}

void Dog::setName(const std::string& nuName)
{
	name = nuName;
}

void Dog::setHasShots(const bool& nuHasShots)
{
	hasShots = nuHasShots;
}

void Dog::setBreed(const std::string& nuBreed)
{
	breed = nuBreed;
}

void Dog::setAge(const int& nuAge)
{
	age = nuAge;
}

void Dog::setTagNumber(const int& nuTagNumber)
{
	tagNumber = nuTagNumber;
}

void Dog::setOwner(const std::string& nuOwner)
{
	owner = nuOwner;
}

void Dog::printDog() const
{
	std::cout << "This is " << name;
	std::cout << ". " << name << " is a " << breed << std::endl;
	std::cout << name << " is owned by " << owner;
	if (hasShots) std::cout << " and has had its shots." << std::endl;
	else std::cout << " and has not had his shots." << std::endl;
	std::cout << name << " is " << age << " years old.";
	std::cout << " " << name << "'s registration number is: " << tagNumber << std::endl;
}
