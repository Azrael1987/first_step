// zad_7_8_2.cpp - zadanie 8 czesc I z rodzialu 7 - (155) -- funkcja przetwarzajaca sturkturey z tablicami

#include <iostream>
#include <string>

using namespace std;
const int Seasons = 4;

struct cash				// prototyp struktury zawierajacy dablice typu double
{
	double expenses[Seasons];
};

cash money;				// stuktura typu cash

const char * Snames[Seasons] =
{
	"Spring",
	"Summer",
	"Autumn",
	"Winter"
};

// prototyp funkcji modyfikujacej tablice 
void fill(cash * pt);

// prototyp funkcji wyswietlajaćej zarartosc tab 
void show(cash money);

int main()
{
	cash money = // stuktura typu cash
	{ 
		 {0,0,0,0} 
	};				
	
	fill(&money);
	show(money);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void fill(cash * pt)
{
	*pt = money;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki za okres >> " << Snames[i] << " <<: ";
		cin >> (*pt).expenses[i];
	}
}

void show(cash money)
{
	double total = 0.0;
	cout << "\nWYDATKI:\n\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": " << money.expenses[i] << " zl" << endl;
		total += money.expenses[i];											// sumowanie wydatkow
	}
	cout << "\nLacznie wydatki roczne: " << total << " zl" << endl;
}

