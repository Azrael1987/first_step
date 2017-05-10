// stock00.cpp -- Listing 10.1 - (193) -- implementacja klasy Stock
// wersja 00

#include <iostream>
#include "stock00.hpp"



void Stock::acquire(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna; "
			<< "ustalam liczbe udzianow w " << company << " na 0." << std::endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot();
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Liczba nabytych udzialow nie moze byc ujemna. "
			<< "Tranzakcja przerwana.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Liczba sprzedawanych udzialow nie moze byc ujemna. "
			<< "Tranzakcja przerwana.\n";
	}
	else if (num > shares)
	{
		std::cout << "Nie możesz sprzedać wiecej udzialow niz posiadasz! "
			<< "Tranzakcja przerwana.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	std::cout << "Spolka: " << company << std::endl
		<< " Liczba udzialow: " << shares << "\n"
		<< " Cena udzialu: " << share_val << "\n"
		<< " Laczna wartosc udzialow: " << total_val << " zl" << "'\n";
}
