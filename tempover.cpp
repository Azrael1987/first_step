// tempover.cpp - (173) - listing  8.14 - przeciazenie szablonow

#include <iostream>

template<typename T>			// szablon A
void ShowArray(T arr[], int n);

template <typename T>			// szablon B
void ShowArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

using namespace std;

int main()
{
	int things[6] = { 12, 23, 32, 43, 432, 234 };

	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};

	double * pd[3];

	// ustawienei wskaznika na pola amount struktury z tablcy Mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "wyliczanie rzeczy pana E.:\n";
	//things to tablica int

	ShowArray(things, 6);		// uzycie szablonu A

	cout << "wyliczanie dlugow pana E.:\n";
	// pd to tablica wskaznikow
	ShowArray(pd, 3);			// uzycie szablonu B - 
	// jesli nie byloby szablonu B, to szablon A wyswietliby adresy 3 elementow, 
	// a nie ich wartosci - efetk ten sam co dla:
	// cout << &mr_E[i].amount << endl;

	cin.get();
	return 0;
}

template<typename T>
void ShowArray(T arr[], int n)
{
	cout << "Szablon A:\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

template<typename T>
void ShowArray(T * arr[], int n)
{
	cout << "Szablon B:\n";
	for (int i = 0; i < n; i++)
		cout << *arr[i] << " ";
	cout << endl;
}
