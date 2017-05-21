// zad_10_2a.cpp - zadanie 2 z rozdzialu 10 - (198) - dekalracje klasy Person
// kompilowac z zad_10_2b.cpp

#include <iostream>
#include <string>
#include <cstdlib>
#include "zad_10_2a.hpp"

Person::Person(const std::string & ln,  char * fn)			// działa poparawnie
	
{
	lname = ln;
	
	for (unsigned int i = 0; i < (strlen(fn)+1); i++)
	{
		fname[i] = fn[i];
	}
	
}

void Person::Show() const
{
	std::cout << fname << " ";
	std::cout << lname << "\n";

}

void Person::FormalShow() const
{
	std::cout << lname << " ";
	std::cout << fname << "\n";
	
}
