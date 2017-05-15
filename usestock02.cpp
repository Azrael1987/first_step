// usestock02.cpp - (195) - listing 10.9
// testowanie  klasy Stock przy uzyciu tablicy obiektow
// kompilować z stock02.cpp

#include<iostream>
#include "stock02.hpp"

const int STKS = 4;

int main()
{
	// utworz tablice zainicjalizowanych obiektow
	Stock stocks[STKS] =
	{
		Stock("NanoSmart", 12, 20.00),
		Stock("FruitPol", 200, 2.0),
		Stock("GruzPol", 130, 3.25),
		Stock("FutroPol", 60 , 6.5)
	};

	std::cout << "Portfel inwestycyjny:\n";
	int st;
	for (st = 0; st < STKS; st++)		// wyswietla wszystkie spolki (obiekty z tablicy)
		stocks[st].show();

	//ustawienie wskaznika na 1 element tablicy
	const Stock * top = &stocks[0];
	for (st = 1; st < STKS; st++)		// szukanie najwyzszej wartosci  udzialow
		top = &top->topval(stocks[st]);

	// teraz top wskazuje na najbardziej wartosciowe udzialy

std::cout << "\nNajbardziej wartosciowy pakiet:\n\n";
top->show();

	system("pause");
	return 0;
}
