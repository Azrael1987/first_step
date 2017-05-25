// zad_10_7b.cpp - (203) - zadanie 7 z rodzialu 10 - test  klasy Plorg
// kompilowac razem z zad_10_7a.cpp
#include <iostream>
#include "zad_10_7a.hpp"

int main()
{
	enum { Size = 5 };
	Plorg societ[Size]		// tablica 5 obiektow
	{
	Plorg(),
	Plorg("Jimmy"),
	Plorg("Tommy", 75)
	};

	for (int i = 0; i < Size; i++)
	{
		std::cout << "Przedstawiciel rasy Plorow nr " << i + 1 << " to: \n";
		societ[i].show();
	}

	societ[3].update(52);
	std::cout << "Przedstawiciel rasy Plorow nr 4 po jedzeniu: \n";
	societ[3].show();

	system("pause");
	return 0;
}
