// strgback.cpp -- (135) - listing 7.10 -- funckja zwracajaca wskaznik char - 2 metody uzycia

#include <iostream>

char * buildstr(char c, int n);			// prototyp funkcji zwracajacacej wskaznik

int main()
{
	using namespace std;
	int times;
	char ch;

	cout << "Podaj znak: ";
	cin >> ch;
	cout << "Podaj liczbe calkowita: ";
	cin >> times;
	
	char * ps = buildstr(ch, times);		// wskaznik przyjmujacy wartosc (wskaznik) zwracana przez funkcje
	cout << ps << endl;
	delete [] ps;							// usuniecie wskaznika i zwolnienie pamieci

	ps = buildstr('+', 10);					// ponowne uzycie wskaznika
	cout << ps << "-GOTOWE-" << ps << endl;
	delete [] ps;
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

char * buildstr(char c, int n)
{
	char * pstr = new char[n + 1];			// [n+1] aby zmiescic znak null czyli '\0'
	pstr[n] = '\0';							// osttni el lancuch ustawiony na null
	while (n-- > 0)							// zmienszenie wartosci n nastepuje juz podczas sprawdzania warunku petli
		pstr[n] = c;						//dopelnienie lancucha
	return pstr;
}
