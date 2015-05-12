#pragma once

class Dog
{
public:
	Dog();
	std::string getName();
	bool getHasShots();
	std::string getBreed();
	int getAge();
	int getTagNumber();
	std::string getOwner();
	void setName(const int& nuName);
	void setHasShots(const bool& nuHasShots);
	void setBreed(const std::string& nuBreed);
	void setAge(cosnt int& nuAge);
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
}
