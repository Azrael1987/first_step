// stock02.cpp - (195) - Listing 10.8 - 
// definicja metd klasy Stock - wykozystywaniem 2 obiektow w metodzie.
// kompilować z usestock02.cpp

#include <iostream>
#include <string>
#include "stock02.hpp"

// konstruktory 
Stock::Stock()		// konstruktor domyslny
{
	company = "bez nazwy";
	shares = 0;
	shares_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
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

void Stock::show() const
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

	//przywrocenie pierwotnego formatu
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}


const Stock & Stock::topval(const Stock & s) const		// zwraca  obiekt o wyzszej wartosci total_val
{
	if (s.total_val > total_val)
		return s;		// zwraca obietke wywwolywany (jawny)
	else
		return *this;	// zwraca obiekt z wwywolywanej metody (nie jawny)
}

