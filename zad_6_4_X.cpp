// zad_6_4.cpp -- zadanie 4 z rodzialu 6 -- funkcja switch + struktua i menu - (120)

#include <iostream>

using namespace std;
const int strSize = 60;

struct zdpw
{
	char name[strSize];		//prawdziwe imie
	char job[strSize];		// stanowisko sluzbowe
	char nick[strSize];		// pseudonim ZPDW
	int preference;			// 0 = imie, 1 = stanowisko, 2 = pseudonim
};
void showmenu();
int main()
{
	zdpw members[5] =		// inicjalizacja tablicy struktur
	{
		{ "Adam Kot", "Stazysta", "PAZUR", 2 },
		{ "Jan Nowak", "Lider", "JOHNY", 1 },
		{ "Maria Wilk", "Asystent", "SUNNY", 0 },
		{ "Tomek Krawczyk", "Stazysta", "TOMMY", 1 },
		{ "Krzysztof Palik", "Dyrektor", "CRIS", 2 }
	};

	showmenu();
		
	char choice;
	cin >> choice;

	while (choice != 'q')//(!(choice == 'Q' || choice == 'q'))
	{
		switch(choice)
		{
		case 'a': cout << "\n" << members[0].name << endl << members[1].name << endl << members[4].name << endl;
			cout << members[2].name << endl << members[3].name << endl; break;
		case 'b': cout << "\n" << members[2].job << endl << members[4].job << endl << members[1].job << endl;
			cout << members[0].job << endl << members[3].job << endl; break;
		case 'c': cout << "\n" << members[4].nick << endl << members[1].nick << endl << members[0].nick<< endl;
			cout << members[2].nick << endl << members[3].nick << endl; break;
		case 'd': cout << "\n" << members[4].nick << endl << members[1].job << endl << members[2].name << endl;
			cout << members[0].nick << endl << members[3].job << endl; break;
		default: cout << "Nie ma takiej opcji\a\nWybierz raz jeszcze.\n";
		}
		showmenu();
		cin >> choice;
	}
	//cout << "Program zaraz ulegnie zamknieciu."; // opcjonalne
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//cin.get();
	return 0;
}

void showmenu()
{
	cout << "\nWybiesz tryb wyswietlania czlonkow zakonu ZPDW:\n\n";
	cout << "a) Lista wg imion\t\tb) Lista wg stanowisk\n";
	cout << "c) Lista wg pseudonimow\t\td) lista wg preferencji\n\n";
	cout << "q) Koniec\n\n";
}
