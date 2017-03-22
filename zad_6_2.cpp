// zad_6_2.cpp -- zadanie 2 z rodzialu 6 - petle liczbowe - (117)

#include <iostream>

const int Size = 10;
int main()
{
	using namespace std;
	
		// wielkosc tablicy na datki
	double donation[Size];	// tablica przechowujaca wartosci datkow
	
	double average;			// srednia datkow
				// licznik petli
	int count = 0;			// licznik datkow
	//int countA;				// licznik datkow powyzej sredniej

	cout << "Porgram do przyjmowa wartosci datkow.\n";
	cout << "Liczy srednia, sume oraz wypisuje kotre datki przekraczaja srednia.\n";
	cout << "Maksymalnie mozna podac 10 kwot.\nAby zakonczyc wporwadzanie datkow wpisz 'q'.\n";

	cout << "\nPodaj wartosc 1 datku: ";
	
	int i =0;
	while (i < Size && cin >> donation[i])			// wprowadznianie danych
	{
		if (++i < Size)
		{
			cout << "Podaj wartosc " << i + 1 <<" datku: ";

		}
		else
		{
			cout << "\nZebrales 10 datkow. Brawo!\n\n";
		}
	}

	if (!cin)			// jesli wprowadzono 'q'
	{
		cin.clear();	// czysczenie strumienia wejsciowego
		cin.get();		// wczytanie 'q'
	}
	cin.get();			// wczytanie znaku nowego wiersza po ostatnie wprowadzonej wartosci

	double total = 0.0;		// suma wszystkich datkow
	for (int j = 0; j < i; j++)			// oblicznaie sumy
	{
		total += donation[j];	
	}

	if (i == 0) 
	{
		cout << "Brak danych o datkach.\n";
	}
	else
	{
		cout << fixed;
		cout.precision(2);					// dokladnosc do 2 miejsc po przecinku
		cout.setf(ios_base::showpoint);		// wyspwietlanie kropki
		cout << "\nSuma datkow: " << total << endl;
		average = total / i;			// obliczanie sredniej
		cout << "Srednia datkow: " << average << endl;
	}

	
	int countA = 0;
	cout << "\nLista datkow wiekszych niz srednia:\n";
	for (i = 0; i < Size; i++)
	{
		if (donation[i] > average)
		{
			cout << "Datek nr.: " << i + 1 << " czyli " << donation[i] << endl;
			countA++;
		}
	}

	if (countA == 0)
		cout << "Brak datkow wiekszych niz srednia - wszyscy sa rownie hojni ;)";

	cin.ignore(numeric_limits <streamsize>::max(), '\n');
	return 0;
}
