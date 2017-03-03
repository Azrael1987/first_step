// nested.cpp -- tepl zagniżdżone i  tablice dwuwymuarowe 
#include<iostream>
#include <string> 		// zalaaczyc w przypadku uzycia sposobu nr 2
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;

	/* const char cities[Cities][25] = */	// tablica znaków char	(sposob nr 1)
	/* const string cities[Cities] = */   // tablica obiektow kalsy string	(sposob nr 2)
	const char * cities[Cities] =		// tablica wzkazników	(sposob nr 3)
	{									// 5 lancuchów znakowych
		"Nowy Targ",
		"Krakow",
		"Jaslo",
		"Krosno",
		"Mielec"
	};

	int maxtemps[Years][Cities] =		// tablica dwuwymiarowa
	{
		{32, 26, 25, 26, 29},			// wartosc maxtemps[0]
		{35, 36, 31, 30, 31},			// wartosc maxtemps[1]
		{38, 28, 29, 32, 35},			// wartosc maxtemps[2]
		{36, 35, 34, 30, 40}			// wartosc maxtemps[3]
	};

	cout << "Temperatury maksymalne (C) w latach 2008-2011" << endl << endl;
	
	for (int city = 0; city < Cities; city++)
	{
		cout.width(15);			// ustala szerokosc pola na 15 znakow - pozwala na uformwoanie tabeli
		cout << left << cities[city];		// left - wyrownanie  zankow w polu do lewej strony (right, internal)
		for (int year = 0; year < Years; ++year)
		{
			cout <<"\t"<< maxtemps[year][city];
		}
		cout << endl;			// juz poza petla
	}
	cin.get();
	return 0;
}
