// zad_6_7.cpp -- zadanie 7 z rodzialu 6 - licznik slow rozrozniajacy poczatkowy znak - (123)

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

const int Size = 60; 

int main()
{
	using namespace std;

	char filename[Size];
	ifstream inFile;				// obiekt obsługujacy odczyt pliku

	cout << "Podaj nazwe pliku: ";
	cin.getline(filename, Size);

	inFile.open(filename);		// polaczenie obiektu z plikiem

	if (!inFile.is_open())		// test czy plik sie otworzyl jesli nie wykonaj petle
	{
		cout << "Otwarcie pliku o nazwie: " << filename << " nie powiodlo sie.\a\n";
		cout << " Program zaraz zostanie zamkniety.";
		cin.get();
		cin.get();
		exit(EXIT_FAILURE);		// zamkniecie programu
	}
	else
		cout << "plik zostal otwarty\n";

	string word;
	int count_other = 0;		// licznik znakow innych niz litery
	int count_vowel = 0;		// licznik samoglosek
	int count_consonant = 0;	// licznik spolglosek
	int count = 0;			// licznik wczytanych wyrazow

	inFile >> word;

	while (inFile.good())
	{
		++count;
		if (isalpha(word[0]))
		{
			switch (word[0])
			{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'Y':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'y':	count_vowel++; break;
			case 'q':
			case 'Q': 	cout << "Koniec wczytywania danych - wpisales \'q\'.";
						count--;
						break;
			default: count_consonant++; break;
			}
		}
		else
		{
			count_other++;
		}
		inFile >> word;
	}

	if (word[0] == 'q' || word[0] == 'Q')
	{
		cout << "Koniec wczytywania danych - wpisales \'q\'.\n";
	}
	else if (inFile.eof())
	{
		cout << "Koniec pliku - wszystkie znaki wczytane."<<endl;
	}
	else if (inFile.fail())
	{
		cout << "wczytywanie danych przerwane - blad - niezgodnosc typow\n";
	}
	else
	{
		cout << "wczytywanie danych  przerwane - przyczyna nieznana.\n";
	}

	if (count == 0)
	{
		cout << "Brak danych do wczytania.\n";
	}
	else
	{
		cout << "Wczytano slow: " << count << endl;
		cout << "Wczytano slow zaczynajacych sie od samoglosek: " << count_vowel << endl;
		cout << "wczytano slow zaczynajacych sie od spolglosek " << count_consonant << endl;
		cout << "wczytanie slow zaczynajacych sie od innych znakow " << count_other << endl;
	}

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	inFile.close();
	return 0;
}
