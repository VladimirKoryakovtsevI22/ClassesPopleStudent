#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include <iostream>
#include <ctime>
using namespace std;

class People
{

private:
	std::string name;
	std::string family;
	std::string patronymic;
	int birthdate;

public:
	People(std::string n, std::string f, std::string p, int b) : name(n), family(f), patronymic(p), birthdate(b) {}

	int calculateAge()
	{
		time_t now = time(0);
		tm* ltm = localtime(&now);
		int Year = 1900 + ltm->tm_year;
		return Year - birthdate;
	};
	void printAge()
	{
		int age = calculateAge();
		printf("Age %s%s%s is %d", name.c_str(), family.c_str(), patronymic.c_str(), age);
	}
};
#endif