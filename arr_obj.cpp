// arr_obj.cpp -- (140) - Listing 7.15 - funkcje z obiektami typu array (C++11)

#include <iostream>
#include <string>
#include <array>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames =
{
	"Spring",
	"Summer",
	"Autumn",
	"Winter"
};

// prototyp funkcji modyfikujacej tablice typu array
void fill(array<double, Seasons> * pa);			// (tablica <typu double, rozmiar Seasons> * pa wskaznik na tablice)

// prototyp funkcjiprzetwarzajacej tablice typu array bez ingerencji w jej zawartosc
void show(array<double, Seasons>da);			// (tablica <typu double, rozmiar Seasons> obiekt-kopia da)

int main()
{
	array<double, Seasons> expenses;
	fill(&expenses);	// wywolanie funkcji wskaznikiem
	show(expenses);		// wywolanie funkcji obiektem
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void fill(array<double, Seasons>* pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki za okres >> " << Snames[i] << " <<: ";
		cin >> (*pa)[i];				// konieczny nawias zeby zinterpretowac wskaznik na tablice a nie tablice wskaznikow
	}
}

void show(array<double, Seasons> da)
{
	double total = 0.0;
	cout << "\nWYDATKI:\n\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": " << da[i] << " zl" << endl;
		total += da[i];
	}
	cout << "\nLacznie wydatki roczne: " << total << " zl" << endl;
}

