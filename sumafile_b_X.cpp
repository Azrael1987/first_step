// sumafile_B.cpp -- funkcje majace tablice za parametry - wczytywanie  danych z pliku z kontorla bledow - listing 6.16 (116)

#include <iostream>
#include <fstream>	// wejscie-wyjscie przez pliki
#include <cstdlib>	// funkcja exit()

const int SIZE = 60;

int main()
{
	using namespace std;
	char filename[SIZE];	// przechowuje nazwe wczytywanego pliku
	ifstream inFile;	// obiekt obslugujacy odczyt z pliku

	cout << "Program sumujacy dane wczytane z pliku i wyliczajacy ich srednia.\n";
	cout << "Uwaga ciag znakow powinien byc zakonczony odatkowym enterem.\n";

	cout << "Podaj nazwe pliku z danymi: ";
	cin.get(filename, SIZE);	// wczytanie nazwy pliku
	inFile.open(filename);		// polaczenie inFile z plikiem

	if (!inFile.is_open())		// sprawdzenie czy  udalo sie otworzyc plik
	{
		cout << "Otwieranie pliku " << filename << " nie powiodlo sie.\a\a\n";
		cout << "Program zostanie zakonczony.\n";
		cin.get();
		cin.get();
		exit(EXIT_FAILURE);
	}

	double value;
	double total = 0.0;
	int count = 0;			// liczba el do odczytu

	inFile >> value;		// pobranie I danej

	while (inFile.good())	// dopoki poprawne dane i brak konca pliku (EOF)
	{
		++count;
		total += value;
		inFile >> value;
	}

	if (inFile.eof())
		cout << "Koniec pliku.\a\n";
	else if (inFile.fail())
		cout << "Wczytywanie danych przerwane - blad typu danych.\a\a\n";
	else
		cout << "Wczytywanie danych przerwane z nieznanych przyczyn.\a\a\a\n";

	// podsumowanie wczytanych danych

	if (count == 0)
		cout << "Nie wczytano danych.\n";
	else
	{
		cout << "\nWczytano " << count << " elementow z pliku " << filename << ".\n";
		cout << "Suma wczytanych wartosci: " << total << "\n";
		cout << "Srednia wszystkich wczytanych wartosci: " << total / count<<"\n";
	}

	inFile.close();			//zamkniecie pliku

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
