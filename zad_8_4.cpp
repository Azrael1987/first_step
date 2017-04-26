// zad_8_4.cpp - (178) - zadanie 4 z rodzialu 8 

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct stringy
{
	char * str;			// wskazuje na lancuch
	int ct;				// dlugosc lancucha bez '\0'
};

void set(stringy & rsturct, char * pstring);

void show( stringy & rstruct, const int n = 1);

void show(const char * pstring, int n = 1);

int main()
{
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";

	set(beany, testing);
	
	show(beany);		// pokazuje napis tylko raz
	show(beany, 2);		// pokazuje napis x2

	testing[0] = 'D';	
	testing[1] = 'u';

	show(testing);		// pokazuje lancuch testing tylko raz
	show(testing, 3);	// pokazuje lancuch testing 3x
	show("Gotowe!");
	
	cin.get();
	return 0;
}

void set(stringy & rstruct, char * pstring)
{
	char * ps;
	ps = pstring;
	rstruct.str = ps;
	rstruct.ct = strlen(ps);
	cout << "\n ct = " << rstruct.ct << endl;
	cout << " test sprawnosci set: "<< ps << endl;
}

void show(stringy & rstruct, const int n)
{
	char *ps2 = rstruct.str;
	
	cout << "\nZawartosc (1) struktury to: \n" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Tekst A: " << ps2 << endl;
	}
	cout <<  endl;
}

void show(const char * pstring, int n)
{
	cout << "Zawartosc (2) lancucha to: \n" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Tekst B: " << pstring << endl;
	}
	cout << endl;
}
