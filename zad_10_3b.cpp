// zad_10_3b.cpp -- 199 - zadanie 3 z rodzialu 10 
// kompilowac z zad_10_3a.cpp


#include <iostream>
#include<string>
#include "zad_10_3a.hpp"

extern const int ArSize;
const int Size = 4;

int main()
{
	using namespace std;
	cout << "Program do rejstrowania ilosc punktow golfistow." << endl;

	
	const int Size = 4;
	Golf2 ranking[Size]	{};				//Tworzy pusta tablice 4 obietkow kalsy Golf2

	string name;
	int score;
	int i;
	int choice;

	cout << "Liga Kobiet." << endl << endl;

	for (i = 0; i < Size; i++)				// przypisuje dane do obiektow z tablicy
	{
		
		cout << "Podaj imie i nazwisko: ";
		getline(cin, name);
		cout << "Podaj ilosc punktow: ";
		cin >> score;
		ranking[i] = Golf2(name, score);
		cin.get();
	}

	cout << "Lista wporwadzonych zawodnikow:\n";	// wyswietla liste zawodnikow
	for (i = 0; i < Size; i++)
	{
		cout << i + 1 << ") ";
		ranking[i].showgolf();
		cout << endl;
	}

	cout << "\nWynik ktorego zawodnika chesz popsrawic?: (0 konczy wprowadzanie zmian)";

	while ((cin>>choice) && (choice <=Size))			// aktualizuje wyniki
	{
		if ((choice <= Size) && (choice > 0))
		{
			cout << "Podaj nowy wynik handicup zawodnika nr " << choice << ": ";
			cin >> score;
			ranking[choice - 1].score_update(score);
			cout << "\nWynik ktorego zawodnika chesz poprawic?: (0 konczy wprowadzanie zmian)";
		}
		else 
			break;
	}

	cout << "Lista po aktualizacji:\n\n";			// wyswietla liste zawodnikow
	for (i = 0; i < Size; i++)
	{
		cout << i + 1 << ") ";
		ranking[i].showgolf();
		cout << endl;
	}

	for (i = 0; i < Size; i++)				// czyszczenie tablicy obiektow destruktorem
	{
		ranking[i].~Golf2();
	}

	system("pause");
	return 0;
}
