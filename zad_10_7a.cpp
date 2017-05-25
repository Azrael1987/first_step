// zad_10_7a.cpp - (203) - zadanie 7 z rodzialu 10 - definicja klasy Plorg
// kompilowac razem z zad_10_7b.cpp
#include <iostream>
#include "zad_10_7a.hpp"

Plorg::Plorg(const char * fn, int sat)
{
	satiety = sat;

	for (unsigned int i= 0; i < (strlen(fn) + 1); i++ )
	{
		name[i] = fn[i];
	}
}

void Plorg::update(int sat)
{
	satiety = sat;
}


void Plorg::show()
{
	std::cout << "Mam na imie " << name;
	std::cout << ", a moj wspolczynik sytosci to " << satiety << "\n\n";
}

Plorg::~Plorg()
{
}
