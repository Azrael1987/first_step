// zad_5_5.cpp -- zadanie 5 z rodz 5 - oblicza roczna oraz globalna sprzedaz ksiazek na podstawie danych miesiecznych

#include <iostream>

int main()
{
	using namespace std;
	const int Years = 2;			//kolumna z latami
	const int Month = 12;			// wiersze z miesiacami
	const char * month[Month]			// 12 el. tablica wskaznikow
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"Novebmer",
		"December"
	};

	int sales[Years][Month];

	cout << "Program do  sumowanie  sprzedazy miesiecznej:\n\n";

	for (int i = 0; i < Month; ++i)			// petla zewnetrza przyjmujaca dane o sprzedazy
	{
		for (int j = 0; j < Years; ++j)		// petla wewnetrzna
		{
			
			cout << "Podaj sprzedaz z " << i + 1 << " miesiaca w " << j + 2000 << " roku: ";
			cin >> sales[j][i]; /*f*/
			//cout << sales[j][i] << "\t";
			cin.get();
		} 
		cout << endl;
	};
	cout << "Zestawienie roczne sprzedazy w latach 2000-2004:\n\n";
	cout << "\t";
	for (int k = 0; k < Years; k++)		// petla robiaca naglowej go tabeli
	{
		cout << "\t" << k + 2000;
	}
	cout << endl;
		
	for (int i = 0; i < Month; i++)		// petla wypisujaca podane dane
	{
		cout.width(10);				// ustala szerokosc pola na 10 znakow - pozwala na uformwoanie tabeli
		cout << left << month[i] << "\t"; // left - wyrownanie  zankow w polu do lewej strony (right, internal)
		for (int j = 0; j < Years; j++)
		{
			cout << sales[j][i] << "\t";
		}
		cout << endl;
	}

	int sYears[Years];			// tablica sprzedazy rocznych
	
	for (int n = 0; n < Years; n++)			// petla sumujaca sprzedaz w danym roku
	{
		sYears[n] = 0;
		for (int q = 0; q < Month; q++)
		{
			sYears[n] = sYears[n] + sales[n][q];
		} 
		cout << "Zestawienie roczne za rok " << n + 2000 << " wynosi: " << sYears[n] <<endl;				
	}
	int gYears = 0;						// sprzedaz globalna
	for (int p = 0; p < Years; p++)		// petyla sumujaca globana sprzedasz w  podanych latach
	{
		gYears = gYears + sYears[p];

	}
	cout << "Zestawienie globalne wynosi: " << gYears << endl;
	
	cin.get();
	return 0;
}
