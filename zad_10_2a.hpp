// zad_10_2a.hpp - zadanie 2 z rozdzialu 10 - (198) - dekalracje klasy Person

#ifndef ZAD_10_2A_HPP
#define ZAD_10_2A_HPP
#include <string>
#include <iostream>

class Person
{
private:
	static const int LIMIT = 256;
	std::string lname;				//nazwisko
	char fname[LIMIT];				//imie
public:
	Person() { lname = "", fname[0] = '\0'; }					// #1
	Person(const std::string & ln,  char * fn = "Hej_Ty");	//#2

// pozniszze metody wyswietlaja imie i nazwisko
	void Show() const;			// kolejnosc imie i nazwisko
	void FormalShow() const;	// kolejnosc nazwisko i imie

};

#endif
