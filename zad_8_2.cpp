// zad_8_2.cpp - (176) - zadanie 2 z rodzialu 8 - funkcja z struktura , referencjami i wartościami domyslnym

#include <iostream>
#include <string>
using namespace std;

struct Batonik
{
	string marka;
	double waga;
	int kalorie;
};

// funcja uzupelnia strukture, ma 3 parametry domyslne i zwraca referencje do struktury
Batonik & Fill(Batonik & b, char * str = "Milenium Munch", double m = 2.85, int k = 350);

// funkcja wyswietla zawratosc struktury
void Show(const Batonik & b);

int main()
{
	Batonik baton;
	Fill(baton);
	Show(baton);
	cin.get();
	return 0;
}

Batonik & Fill(Batonik & bb, char * str, double m, int k)
{
	bb.marka = str;
	bb.waga = m;
	bb.kalorie = k;
	return bb;
}

void Show(const Batonik & aa)
{
	std::cout << "Struktura zawiera nastepujace dane:\n";
	cout << "\nNazwa producenta: " << aa.marka << endl;
	cout << "Waga batona: " << aa.waga << endl;
	cout << "Ilosc kalorii: " << aa.kalorie << endl;
}
