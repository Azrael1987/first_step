// support.cpp - 184 - listing 9.6 - stoswanie zmiennych zewnetrzynch
// kompilowac raze  z external.cpp

#include <iostream>
extern double warming;		//dekalracja referencyjna (deklaracja) zmiennej warming

// prototypy funkcji
void update(double dt);
void local();

using std::cout; 

void update(double dt)		// modyfikuje zmienna globalna
{
	extern double warming;	// opcjonalne powtorzenie deklaracji
	warming += dt;			// odwolanie do globalnej zmiennej warning
	cout << "Zwiekszenie parametru ocieplenie do " << warming << " stopni.\n";
}

void local()				// kozysta ze zmiennej lokalnej
{
	double warming = 0.8;	// nowa zmienna przeslana zmienna globalna
	cout << "Lokalne ocieplenie wynosi " << warming << " stopni.\n";
	// odwolanie do zmiennej globalne za pomoca operatora zasiegu ::
	cout << "Ale globalne ma wartosc " << ::warming << " stopni.\n";
}
