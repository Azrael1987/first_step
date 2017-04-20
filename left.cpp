// left.cpp - (168) = listing 8.9 - funkcja obsluujaca lancuchy z parametrami domyslnymi

#include <iostream>

const int ArSize = 80;
char * left(const char * str, int n = 1);
int main()
{
	using namespace std;
	char sample[ArSize];
	cout << "Podaj lancuch znakow: \n";
	cin.get(sample, ArSize);
	char * ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;		// zwolnienie starego lancucha
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;		// zwpolnienei nowego lancucha

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

// funkcjca zwraca wskaznick na nowy lancuch skaldajacy sie 
// z pierwszych n znakow lancucha str
char * left(const char * str, int n)
{
	if (n < 0)
		n = 0;
	char * p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];		// kopiowanie znakow
	while (i <= n)
		p[i++] = '\0';		// zerowanie reszty lancucha
	return p;
}
