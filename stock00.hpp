// stock00.hpp -- Listing 10.1 - (193) -- interfejs klasy Stock
// wersja 00

#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock		// deklaracja klasy
{
private:
	std::string company;			// nazwa spolki
	long shares;					// ilosc udzialow
	double share_val;				// wartosc obligacji
	double total_val;				// laczna wartosc udzialow
	void set_tot()
	{
		total_val = shares * share_val;
	}
public:
	void acquire(const std::string & co, long n, double pr); // I zakup obligacji
	void buy(long num, double price); // dodatkowy zakup obligacji
	void sell(long num, double price); // sprzedaż obligacji
	void update(double price); // aktualizacja wartosci
	void show(); // wyswietlanie informacji zbiorczych
};
#endif
