// swaps.cpp - 163 - listing 8.4 - uzycie referencji i wskaznikow do zmiany wartosci

#include <iostream>

void swapr(int & a, int & b);		// a, b aliasy artosci int
void swapp(int * p, int * q);		// p, q adresy wartosci int
void swapv(int a, int b);			// a, b nowe zmienne

int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Zamiana wartosci za pomocja referencji: \n";
	swapr(wallet1, wallet2);		// przekaz zmienne
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Zmiana wartosci za pomocoa wskaznikow: \n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Proba zamiany przy przekazywaniu przez wartosc:\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cin.get();
	return 0;
}

void swapr(int & a, int & b)	// uzycie referencji
{
	int temp;

	temp = a;				// uzycie a, b jako wartosci zmiennych
	a = b;
	b = temp;
}

void swapp(int * p, int * q)	// uzycie wskaznikow
{
	int temp;

	temp = *p;				// uzycie *p, *q jako wartosci zmiennych
	*p = *q;
	*q = temp;
}

void swapv(int a, int b)		// proba uzycia wartosci
{
	int temp;

	temp = a;				//uzycie a,b jako wartosci zmiennych
	a = b;
	b = temp;
}
