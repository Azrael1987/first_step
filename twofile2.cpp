// twofile2.cpp - 185 - listing 9.8 -- zmienne z laczenie zewnetrzym i wewnetrznym
// kompilowac razem z twofile1.cpp

#include <iostream>
extern int tom;				// zmienna zdefiniowana w innym pliku
static int dick = 10;		// przeslaia zewnetrzna wersje  zmiennej dick
int harry = 200;			// definicja zmiennej zewnetrzej - brak konflitu z wersja z pliku twofile1.cpp

void remote_access()
{
	using namespace std;
	cout << "Funkcja remote_access() zwaraca nastepujace adresy:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry. \n\n";
}
