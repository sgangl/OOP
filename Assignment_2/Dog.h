#pragma once
#include <string>

class Dog
{
public:
	Dog();
	std::string getName() const;
	bool getHasShots() const;
	std::string getBreed() const;
	int getAge() const;
	int getTagNumber() const;
	std::string getOwner() const;
	void setName(const std::string& nuName);
	void setHasShots(const bool& nuHasShots);
	void setBreed(const std::string& nuBreed);
	void setAge(const int& nuAge);
	void setTagNumber(const int& nuTagNumber);
	void setOwner(const std::string& nuOwner);
	void printDog() const;
private:
	std::string name;
	bool hasShots;
	std::string breed;
	int age;
	int tagNumber;
	std::string owner;
};