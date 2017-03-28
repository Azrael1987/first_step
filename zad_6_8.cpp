// zad_6_8.cpp - zadanie 8 z rodzialu 6 - (124) -- program liczacy  znaki w pliku (wraz z bialymi znakami)

#include <iostream>   // std::noskipws
#include <fstream>    // ifstream
#include <cstdlib>    // exit()

using namespace std;
int main()
{
	const int Size = 120;
	char filename[Size];
	ifstream inFile;					// obiekt do wczytywania  z pliku

	cout << "Podaj nazwe pliku lub sciezke dostepu: ";
	cin.getline(filename, Size);		// nazwa pliku

	inFile.open(filename);				// powiazanie obiektu z plikiem

	if (!inFile.is_open())				// test otwarcia pliku
	{
		cout << "Otwracie pliku " <<filename<< " nie powiodlo sie.\n";
		cout << "Program zaraz zostanei zamkniety.";
		cin.get();
		cin.get();
		exit(EXIT_FAILURE);
	}
	else
		cout << "Plik zostal otwarty.\n";
		
	char ch;
	int count = 0;
	
	inFile >> noskipws >> ch;  //  noskipws -- nie pomijaj bialych znakow (z biblioteki <iostream>)

	while (!inFile.eof())
	{
		if (inFile.good())
		{
			while (!inFile.eof())
			{
				count++;
				inFile >> ch;
			}
		}
		if (inFile.eof())
		{
			cout << "Koniec pliku\n";
		}
		else if (inFile.fail())
		{
			cout << "Wczytywanie danych zostalo przerwane. \n\aBlad typu pliku.";
		}
		else
			cout << "Wczytywanie danych zostalo przerwane. \n\aNieznany blad.";
		
		inFile >> ch;
	}

	if(count == 0)
	{
		cout << "Brak danych do wczytania.\nPlik pusty.";
	}
	else
	{
		cout << "\nPlik " << filename << " zawiera " << count << " znakow (w tym spacje i znaki nowej linii).\n";
	}
		inFile.close();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 0;
}
