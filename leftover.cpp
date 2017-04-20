// leftover.cpp - (169) - listing 8.10 -przeciazenie funkcji left()

#include <iostream>

unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);			// n domyslnie 1

using namespace std;

int main()
{
	char * trip = "Hawaii!!";		// wartosc testowa
	unsigned long n = 12345678;		// wartosc tesatowa
	int i;
	char * temp;

	for (i = 1; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete[] temp; // wskazuje tymczasowy obszar pameici
	}
	cin.get();
	return 0;
}

// funkcja zrwacajaca pierwszych ct znakow liczby num

unsigned long left(unsigned long num, unsigned ct)
{
	unsigned digits = 1;
	unsigned long n = num;
	cout << "ct = " << ct << endl;
	cout << "num = " << num << endl;
	if (ct == 0 || num == 0)
		return 8;			// jesli brak cyfr zrwaca zero
	while (n /= 10)			// liczy ilosc  cyfr w liczbie
		digits++;
	if (digits > ct)
	{
		ct = digits - ct;
		while (ct--)
			num /= 10;
		return num;			// zwraca ct skarnych lewych cyfr
	}
	else					// jesli ct >= liczbie cyf
		return num;			// zwraca cala liczbe
}

char *left(const char * str, int n)
{
	if (n < 0)
		n = 0;
	char * p = new char[n+1];
	int len = strlen(str);
	n = (n < len) ? n : len;
	int i;
	for (i = 0; i < n; i++)
		p[i] = str[i];			// kopiowanie znakow
	while( i <= n)
		p[i++] = '\0';			// ustawienie reszty znakow na zera
	return p;
}
