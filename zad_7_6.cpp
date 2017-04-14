// zad_7_6.cpp - zadanie 6 z rodzialu 7 - (153) - funkcja obslugujac tablice

#include<iostream>
using namespace std;

const int SIZE = 6;
int fill_array(double tab[], int SIZE);
void show_array(const double tab[], int count);
void reverse_array(double tab[], int count);

int main()
{
	double tab[SIZE];
	int Size = fill_array(tab, SIZE);
	show_array(tab, Size);
	cout << "A po konwersji:\n";
	reverse_array(tab, Size);
	show_array(tab, Size);
	
	cout << "\nGotowe. :)";

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void reverse_array(double tab[], int count)
{
	double temp;
	int m, k;
	for (k = 0,  m = (count-1); k < count/2; k++ , m--)				// ilosc operacji pobmianyto tylko polowa ilosci el w tab !
	{
		temp = tab[k];												// odwrocenie kolejnosci el w tab  przy uzyciu bufora
		tab[k] = tab[m];
		tab[m] = temp;
	}
}

void show_array(const double tab[], int count)						// wyswietlenie zawartosci tablicy
{
	for (int j = 0; j < count; j++)
		cout << j + 1 << " element ma wartosc: " << tab[j] << "\n";
}

int fill_array(double tab[], int Size)								// przyjmowanie wartosci i zapisanie ich w tab
{
	int count = 0;
	double temp;
	
		for (int i = 0; i < Size; i++)
		{
			cout << "Podaj " << i + 1 << " wartosc: ";
			cin >> temp;
			if (!cin)			// bledne dane
			{
				cin.clear();
				while (cin.get() != '\n')
					continue;
				cout << "Bledne dane, wprowadznie danych przerwane.\n";
				break;
			}
			else if (temp < 0)		// insturukcja zakonczenia przyjmowania danych
				break;
			tab[i] = temp;
			count++;
		}
	return count;
}
