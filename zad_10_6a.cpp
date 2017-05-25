// zad_10_6a.cpp - (202) - zadanie 6 z rodzialu 10 - definicje motod klasy Move w tym zawierjaca 2 obiekty
// kompilowac razem z zad_10_6b.cpp

#include <iostream>
#include "zad_10_6a.hpp"

Move::Move(double a, double b)				// konstruktor obiektu z 2 zmiennymi
{
	x = a;
	y = b;
}

void Move::showmove() const					// wyswietla elementy obiektu
{
		std::cout << "\n Obiekt z pod adresu " << this << " zawiera nastepujace elementy:\n";
		std::cout << "X wynosi: " << x << "\n";
		std::cout << " Y wynosi: " << y << "\n";
}

void Move::reset(double a, double b)		// akutalizje  lub restuje wartosci elementow obiektu
{
	x = a;
	y = b;
}

Move Move::add(const Move & m) const		// sumuje wartosci x-owe i y-owe 2 obiektow i przypisuje je 3 obiektowi
{
	/*
	test wewnetrzny metody
	std::cout << "k1.x czyli m.x = " << m.x << std::endl;
	std::cout << "k1.y czyli m.y = " << m.y << std::endl;
	std::cout << "k2.x czyli x = " << x << std::endl;
	std::cout << "k2.y czyli y = " << y << std::endl;*/
	Move k = Move(x + m.x, y + m.y);
	
	return k;
}
