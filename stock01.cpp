// stock01.cpp -- (194) - Listing 10.5 - klasa Stock, z konstrukotrami i destruktorami
// kompilować ze usestock01.cpp

#include <iostream>
#include <string>
#include "stock01.hpp"

// konstruktory (wersje "halasliwe)
Stock::Stock()		// konstruktor domyslny
{
	std::cout << "Wywolanie konstruktora domyslnego\n";
	company = "bez nazwy";
	shares = 0;
	shares_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
	std::cout << "Wywolanie konstruktora z argumentem " << co << '\n';
	company = co;

	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna; "
			<< "ustalam liczbe udzialow w " << company << "na 0.\n";
		shares = 0;
	}
	else
		shares = n;
	shares_val = pr;
	set_tot();
}

// destruktor klasy
Stock::~Stock()
{
	std::cout << "Do widzenia " << company << "!\n";
}


void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Liczba nabywanych udzialow nie moze byc ujemna; "
			<< "Tranzakcja przerwana.\n";
	}
	else
	{
		shares += num;
		shares_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Liczba sprzedawanych udzialow nie moze byc ujemna; "
			<< "Tranzakcja przerwana.\n";
	}
	else if (num > shares)
	{
		std::cerr << "Nie mozesz sprzedac wiecej  udzialow niz posiadasz! "
			<< "Tranzakcja przerwana.\n";
	}
	else
	{
		shares -= num;
		shares_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	shares_val = price;
	set_tot();
}

void Stock::show()
{
	using std::cout;
	using std::ios_base;
	
	//ustawienie formatowania na #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "Spolka: " << company << " Liczba udzialow: " << shares << '\n';
	cout << " Cena udzialu: " << shares_val << " zl";

	//ustawienie formatowania na #.##
	cout.precision(2);
	cout << " Laczna wartosc udzialow: " << total_val << " zl" << '\n';

	//przywrocenie popraedniego formatu
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
