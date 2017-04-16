// zad_7_8_1.cpp - zadanie 8 czesc I z rodzialu 7 - (155) -- funkcja przetwarzajaca tablice

#include <iostream>
#include <string>

using namespace std;

const int Seasons = 4;
double expenses[Seasons];
const char * Snames [Seasons] =
{
	"Spring",
	"Summer",
	"Autumn",
	"Winter"
};

// prototyp funkcji modyfikujacej tablice 
void fill(double expenses[], int Seasons);			

// prototyp funkcji wyswietlajaćej zarartosc tab 
void show( const double expenses[], const int Seasons);			

int main()
{
	fill(expenses, Seasons);	
	show(expenses, Seasons);		
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void fill(double expenses[], int Seasons)
{
	double*pt;
	pt = expenses;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki za okres >> " << Snames[i] << " <<: ";
		cin >> (pt)[i];				
	}
}

void show(const double expenses[], const int Seasons)
{
	double total = 0.0;
	cout << "\nWYDATKI:\n\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": " << expenses[i] << " zl" << endl;	 
		total += expenses[i];											// sumwoanie wydatkow
	}
	cout << "\nLacznie wydatki roczne: " << total << " zl" << endl;
}

