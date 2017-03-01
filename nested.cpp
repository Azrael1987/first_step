// nested.cpp -- tepl zagniżdżone i  tablice dwuwymuarowe - podej wyniki ale buguje sie podczas pracy :(

#include<iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;


	const char * cities[Cities] =		// tablica wzkazników
	{									// 5 lancuchów znakowych
		"Nowy Targ",
		"Krakow",
		"Jaslo",
		"Krosno"
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
		cout << cities[city];
		for (int year = 0; year < Years; ++year)
		{
			cout <<"\t"<< maxtemps[year][city];
		}
		cout << endl;			// juz poza petla
	}
	cin.get();
	return 0;
}
