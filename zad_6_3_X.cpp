// zad_6_3_X.cpp -- zadanie 3 z rodzialu 6 -- menu z prototypem funkcji - (119)

#include <iostream>
#include <cstdlib>		// funkcja exit() -- tu opcjonalna

using namespace std;	// musi byc globalnei aby objelo funkcje
void showmenu();		// prototyp funkcji
int main()
{
	
	
	showmenu();
	char ch;
	cin >> ch;

	while (ch != 'q')
	{
		switch (ch)		// wybor z menu
		{
		case 'r': cout << "\nKrolik jest roslinozerny.\n"; break;
		case 'd': cout << "\nSosna to drzewo.\n"; break;
		case 'p': cout << "\nSzopen to kompozytor.\n"; break;
		case 'g': cout << "\nBaldur's Gates to swietna gra\n"; break;
		case 'Q':			// alternatywne wyjscie z programu aby  pokazac inny sposob
		{
			cout << "Program za chwile zostanie zamkniety.";
			cin.get();
			cin.get();
			exit(EXIT_FAILURE);
		}
		default: cout << "Podaj litere r, p, d, g lub q: ";		// wrazie podanie innego znaku
		}
		showmenu();
		cin >> ch;
	}
	
	cout << "\nDo zobaczenia.";

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void showmenu()
{
	cout << "\nMenu wyboru encyklopedii:\n\n";
	cout << "r) roslinozerca\tp) pianista\n";
	cout << "d) drzewo\tg) gra\n";
	cout << "q) wyjscie z programu\n\n";
	cout << "Podaj litere r, p, d, g lub q: ";
}
