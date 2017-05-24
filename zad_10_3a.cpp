// zad_10_3a.cpp -- 199 - zadanie 3 z rodzialu 10
// kompilowac z zad_10_3b.cpp
#include <iostream>
#include <string>
#include "zad_10_3a.hpp"

extern const int ArSize;
extern const int Size;

Golf2::Golf2(const std::string & name, int hc)		// konstruktor przyjmujacy argumenty
{
	
	while (hc < 0)
	{
		std::cout << "wynik nie moze byc ujemny.\n";
		std::cout << "Podaj jeszcze raz wynik: ";
		std::cin >> hc;
	}
	 if (hc == 0)
	{
		std::cout << "Zawodnik nie podlega kwalfikacji.\n";
		handicap = 0;

	}
	else if (hc > 0)
	{
		handicap = hc;
		std::cout << "Wyniku przyjety.\n";
	}

	fullname = name;
}

Golf2::Golf2()			// domyslny konstruktor
{
};

Golf2::~Golf2()			// destruktor
{
};

void Golf2::score_update(int hc)			// funkcja aktualizjaca wynik
	{
		while (hc < 0)
		{
			std::cout << "wynik nie moze byc ujemny.\n";
			std::cout << "Podaj jeszcze raz wynik: ";
			std::cin >> hc;
		}
		 if (hc == 0)
		{
			std::cout << "Zawodnik nie podlega kwalfikacji.\n";
			handicap = 0;
		}
		else if (hc > 0)
		{
			handicap = hc;
			std::cout << "Wprowadzanie wyniku zakonczona.\n";
			std::cout << "test 5 " << handicap << std::endl;
		}
		std::cout << " test 3 tu juz porblem " << handicap << std::endl;
	}

void Golf2::showgolf()			// funkcja wyswietlajaca dane zawodnikow
{
	std::cout << "Nazwisko gracza: " <<fullname << std::endl;
	std::cout << " Ilosc punktow handicap: " << handicap << std::endl;
}
