// zad_7_3.cpp - zadanie 3 z rodzialu 7 - przekazuwanie struktury do funkcji przez wartosc i adres

#include <iostream>
using namespace std;

struct pudlo
{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
}box = { "Papier-san", 1.5, 2, 4, 10 };

void show_struct(const pudlo box);			// przyjmowanie parametru przez wartosc struktury
pudlo * fill_struct(pudlo * pb);			// przyjmowanie parametru przez adres struktury

int main()
{
	pudlo *pb = &box;			// utworzenie wskaznika
	show_struct(box);
	fill_struct(pb);
	cout << "\nUps ;) mala aktualizacja objetosci:\n";
	show_struct(box);
	cout << "\nGotowe\n";
	cin.get();
	return 0;
}

pudlo * fill_struct(pudlo * pb)
{
	pb->objetosc = pb->wysokosc * pb->szerokosc * pb->dlugosc;
	return pb;
}

void show_struct(const pudlo box)
{
	cout << "Zawratosc struktury box:\n";
	cout << "Producent: "<< box.producent << endl;
	cout << "Wysokosc: " << box.wysokosc << endl;
	cout << "Szerokosc: " << box.szerokosc << endl;
	cout << "Dlugosc: " << box.dlugosc << endl;
	cout << "Objetosc: " << box.objetosc << endl;
}
