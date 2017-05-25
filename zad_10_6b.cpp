// zad_10_6b.cpp - (202) - zadanie 6 z rodzialu 10 - test klasy Move z metoda zawierajacy 2 obiekty
// kompilowac razem z zad_10_6a.cpp

#include<iostream>
#include "zad_10_6a.hpp"

int main ()
{
	using namespace std;
	
	double a;
	double b;

	cout << "Podaj wartosc liczby a: ";
	cin >> a;
	cout << "Podaj wartosc liczby b: ";
	cin >> b;

	Move k1 = Move(a, b);					// tworzy obiekt k1
	k1.showmove();							// wyswietla elementy obiektu k1

	cout << "\nPodaj wartosc liczby c: ";
	cin >> a;
	cout << "Podaj wartosc liczby d: ";
	cin >> b;

	Move k2 = Move(a, b); 					// tworzy obiekt k1
	k2.showmove();							// wyswietla elementy obiektu k1

	const Move * po = &k2;					// utworzenie wskaznika na obiekt k2

	// wywolanie funkcji add z obiektu k2 (przez wskaznik po)	
	// gdzie argumentem jest obiekt k1 
	// a nastepnie przypisanie zwraconego nowo utworzonego obiektu k3 do wskaznika po
	po = &(po->add(k1));	

	po->showmove();			// wyswietla elementy nowego obiektu k3 )wskazywanego  przez wskaznik po)
	
	a = 0.0;		// zerwanie zmiennej a
	b = 0.0;		// zerwanie zmiennej b

	cout << "\nNadaj nowe wartosci obiektowi k1:\n";
	cout << "Podaj nowa wartosc liczby a: ";
	cin >> a;
	cout << "Podaj podaj nowa wartosc liczby b: ";
	cin >> b;

	k1.reset(a, b);			// zmienia wartosci w obiekcie k1

	k1.showmove();			// wyswietla nowe elementy obiektu k1

	system("pause");
	return 0;
}
