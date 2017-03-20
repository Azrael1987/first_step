// switch.cpp -- uzycie instrukcji switch -- listing 6.10

#include<iostream>
using namespace std;
void showmenu();			// prototyp funkcji
void report();
void comfort();
int main()
{
	showmenu();
	int choice;
	cin >> choice;
	while(choice !=5)
	{
		switch (choice)
		{
		case 1: cout << "\a\a\a\n";;
				break;
		case 2: report();
				break;
		case 3:	cout << "\nSzef nigdzie nie wychodzil.\n";
				break;
		case 4:	comfort();
				break;
		default: cout << "\nNie ma takiej opcji.\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Do zobaczenia :)";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void showmenu()
{
	cout << "Wybierz 1, 2, 3, 4 albo 5:\n\n"
		"1) Alarm			2) Raport\n"
		"3) Alibi			4) Luzik\n"
		"5) Koniec\n\n";
}

void report()
{
	cout << "\nTo byl naprade wspanialy tydzien.\n"
		"Sprzedaz wzrosla o 120%,a wydatki spadly o 15%.\n\n";
}

void comfort()
{
	cout << "\nPracownicy uwazaja Cie za najfajniejszego\n"
		"dyrektora w calej branzy. Zarzad sadzi, ze jestes\n"
		"najlepszym dyrektorem w calej branzy.\n\n";
}
