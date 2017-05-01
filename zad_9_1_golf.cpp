// zad_9_1_golf.cpp -- 190 - zadanie 1 z rodzialu 9 
// kompilowac z zad_9_1_golf_m.cpp
#include <iostream>
#include <string>
#include "zad_9_1_golf.h"

using namespace golf_ns;

extern const int Len;

extern golf jim;
extern golf ann;
extern golf tom;

void setgolf(golf & g, string & name, int hc)
{
	g.fullname = name;
	g.handicap = hc;
}

void setgolf(golf & g)
{
	cout << "podaj imie i nazwisko zawodnika: ";
	string temp;
	getline(cin, temp);
	
	if (temp.size() == 0)
	{
		cout << " 0 - nie udana proba wprowadzienia danych.\n";
	}
	else 
	{	
	cout << " 1 - Nazwisko przyjete.\n";
	g.fullname = temp;
	
	cout << "Podaj ilosc punktow handicap: ";
	cin >> g.handicap;
	}
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	cout << "Nazwisko gracza: " << g.fullname << endl;
	cout << "Ilosc punktow hendicap: " << g.handicap << endl;
}
