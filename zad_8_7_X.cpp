// zad_8_7_X.cpp - 181 - zadanei 7 z rodziału 8 -
// program zawiera przeciazone szablony funkcji sumujacych 
// zawartosc tablicy oraz sumujacy zawratsoc pol liczbowych structury

#include <iostream>
#include <cstdlib>

template<typename T>			// szablon A
int ShowArray(T arr[], int n);

template <typename T>			// szablon B
double ShowArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

using namespace std;

int main()
{
	cout << "Program sumujacy zawartosc tablicy\n oraz sumujacy zawratsoc pol liczbowych structury\n\n";
	
	int things[6] = { 12, 23, 32, 43, 432, 234 };

	struct debts mr_E[3] =
	{
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};

	double * pd[3];

	// ustawienei wskaznika na pola amount struktury z tablcy Mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Suma rzeczy pana E. ";
	//things to tablica int
	cout<< ShowArray(things, 6) << " zl."<<endl<<endl;		// uzycie szablonu A

	cout << "Suma dlugow pana E. ";
	// pd to tablica wskaznikow
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << ShowArray(pd, 3) << " zl." << endl<<endl;			// uzycie szablonu B - 
								// jesli nie byloby szablonu B, to szablon A wyswietliby sume adresow 3 elementow, 
								// a nie  sume ich wartosci
	cin.get();
	return 0;
}

template<typename T>
int ShowArray(T arr[], int n)
{
	int totalint = 0;
	cout << "wg szablonu A:\n";
	for (int i = 0; i < n; i++)
		totalint += arr[i];
	
	return totalint;
}

template<typename T>
double ShowArray(T * arr[], int n)
{
	double totaldouble = 0;
	cout << "wg szablonu B:\n";
	for (int i = 0; i < n; i++)
	{
		totaldouble += *arr[i];
	}
	return totaldouble;
}
