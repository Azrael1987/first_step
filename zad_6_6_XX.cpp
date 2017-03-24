// zad_6_6_XX.cpp -- zadanie 6 z rodzialu 6 - dynamiczna tablica struktur ze wskaznikami -- (122)

#include <iostream>
#include <string>

using namespace std;

struct donation
{
	char name[60];
	double amount;
};

int main()
{
	cin.clear();

	int n;
	cout << "Podaj ilosc dotacji." << endl;
	cin >> n;
	
	donation * p_struct = new donation[n];

	for (int i = 0; i < n; i++)
	{
		cout << "\nPodaj imie i nazwisko "<< i+1 <<" darczyncy: ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');		//czyszczenie strunienia danych
		cin.get((p_struct+i)->name, 60);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');		//czyszczenie strunienia danych
		cout << "Podaj wysokosc " << i + 1 << " datku: ";
		cin >> p_struct[i].amount;
	}

	int count_A = 0;			// licznik bardzo hojnych darczyncow
	int count_B = 0;			// licznik hojnych darczyncow

	cout << "\nLista bardzo hojnych darczyncow:\n\n";		// petla porownujaca  wysokosc datkow
	for (int i = 0; i < n; i++)
	{
		if (p_struct[i].amount >= 10000)
		{
			count_A++;
			cout << p_struct[i].name << " - " << p_struct[i].amount <<endl;
		}
	}
	if (count_A == 0)
	{
		cout << "Brak osob." << endl;
	}

	cout << "\nList hojnych darczyncow:\n\n";			// petla porownujaca  wysokosc datkow
		for (int i = 0; i < n; i++)
	{
		if (p_struct[i].amount < 10000)
		{
			count_B++;
			cout << p_struct[i].name << " - "<< p_struct[i].amount << endl;
		}
	}
	if (count_B == 0)
	{
		cout << "Brak osob." << endl;
	}

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();

	delete [] p_struct;			// zwalnianie pamieci
	return 0;
}
