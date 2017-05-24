// zad_10_5a.cpp - 201 - zadanie 5 z rodzialu 10 - struktury przechowywane na stosie
//kompilowac z zad_10_5b.cpp

#include "zad_10_5a.hpp"
#include <iostream>

Stack::Stack()
{
	top = 0;
}

Stack::~Stack()
{
}

void Stack::show()
{
	std::cout << "laczna wartosc obciazen to: ";
	std::cout << sum_in << std::endl;
	std::cout << "laczna wartosc zdjetych naleznosci to: ";
	std::cout << sum_out << std::endl;
}


bool Stack::push(const customer * ps)
{
	if (top < MAX)
	{
		sum_in += items[top].payment;		// zwiekszenie sumy obciazen
		items[top++] = *ps;					// przesuniecie wskaznika na puste miejsce w tabeli obiektow
		return true;
	}
	else
	{
		std::cout << "Stos jest pelny. Przekroczono limit naleznosi.\a\n";
		return false;
	}
}

bool Stack::pop(customer * ps)

{
	if (top > 0)
	{
		*ps = items[--top];				// cofniecie  wskaznika na "nizszy" element tablicy
		sum_out += items[top].payment;	// zwiekszenie sumy rozliczen
		sum_in -= items[top].payment;	// zmniejszenie sumy obciazen
		return true;
	}
	else
	{
		std::cout << "Stos jest pusty - brak dalszych naleznosci.\a\n";
		return false;
	}
}

