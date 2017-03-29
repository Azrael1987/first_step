// zad_6_9.cpp -- zadanie 9 z rodzialu 6 - (123) -- wczytywanie z pliku do struktury

#include <iostream>	// std::noskipws
#include <fstream>	// biblioteka wejscia-wyjscia - ifstream
#include <cstdlib>	// exit ()
#include <limits>	// .igrone(numeric_limits<streamsize>::max(), '\n')

struct donation
{
	char name[60];
	double amount;
};

using namespace std;
int main()
{
	const int Size = 100;			// wielkosc tablicy z nazwa  pliku
	char filename[Size];			// tablica na nazwe pliku
	ifstream inFile;					// obiekt do odczytu danych z pliku

	
	cout << "Podaj nazwe pliku lub sciezke dostepu: ";
	cin.getline(filename, Size);	// wczytanie z konsoli nazwy pliku
	inFile.open(filename);			// powiazanie obiektu z plikiem

	if (!inFile.is_open())			// test poprawnosci otwarcia pliku
	{
		cout << "Otwieranie pliku " << filename << " nie powiodlo sie.\n";
		cout << "Program za chcwile zostanie zamkniety.";
		cin.get();
		cin.get();
		exit(EXIT_FAILURE);
	}
	else
		cout << "Plik zostal otwarty.\n";

	int n;
	inFile >> n;

	donation * ps = new donation[n];			// wskaznik na strukture
	
	cout << "\nTwoja lista zawiera " << n << " darczyncow.\n";
	
	for (int i = 0; i < n; i++)
	{
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
		inFile.getline((ps + i)->name, 60);
		inFile >> ps[i].amount;
	}

	int count_A = 0;			// licznik bardzo hojnych darczyncow
	int count_B = 0;			// licznik hojnych darczyncow

	cout << "\nLista bardzo hojnych darczyncow:\n\n";		// petla porownujaca  wysokosc datkow
	for (int i = 0; i < n; i++)
	{
		if (ps[i].amount >= 10000)
		{
			count_A++;
			cout << ps[i].name << " - " << ps[i].amount << " zl." << endl;
		}
	}
	if (count_A == 0)
	{
		cout << "Brak osob." << endl;
	}

	cout << "\nList hojnych darczyncow:\n\n";			// petla porownujaca  wysokosc datkow
	for (int i = 0; i < n; i++)
	{
		if (ps[i].amount < 10000)
		{
			count_B++;
			cout << ps[i].name << " - " << ps[i].amount << " zl." << endl;
		}
	}
	if (count_B == 0)
	{
		cout << "Brak osob." << endl;
	}

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	inFile.close();
	delete[] ps;

	return 0;
}
