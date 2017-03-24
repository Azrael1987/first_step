// zad_6_4_II_X.cpp -- zadanie 4 z rodzialu 6 -- funkcja switch + struktua i menu oraz z autosortowaniem na wskaznikach - (120)

#include <iostream>

using namespace std;
const int strSize = 60;
const int teamSize = 5;
char listA[teamSize];
char listB[teamSize];
char listC[teamSize];
char listD[teamSize];
char** temp = new char *[strSize];

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
	zdpw members[teamSize] =		// inicjalizacja tablicy struktur
	{
		{ "Adam Kot", "Stazysta", "PAZUR", 2 },
		{ "Jan Nowak", "Lider", "JOHNY", 1 },
		{ "Maria Wilk", "Asystent", "SUNNY", 0 },
		{ "Marta Krawczyk", "Stazysta", "LIU", 1 },
		{ "Krzysztof Palik", "Dyrektor", "CRIS", 2 }
	};

	char** listA = new char *[teamSize];		// tworzenie tabeli na liste imion (listA)
	for (int i = 0; i < teamSize; i++)
	{
		listA[i] = new char[strSize];
	}

	char** listB = new char *[teamSize];		// tworzenie tabeli na liste stanowisk (listB)
	for (int i = 0; i < teamSize; i++)
	{
		listB[i] = new char[strSize];
	}

	char** listC = new char *[teamSize];		// tworzenie tabeli na liste pseudonimow (listC)
	for (int i = 0; i < teamSize; i++)
	{
		listC[i] = new char[strSize];
	}

	char** listD = new char *[teamSize];		// tworzenie tabeli na liste mieszana (listD)
	for (int i = 0; i < teamSize; i++)
	{
		listC[i] = new char[strSize];
	}
	
	for (int i = 0; i < teamSize; i++)		// wczytywanie do listy imion
	{
		listA[i] = members[i].name;
	}

	for (int i = 0; i < teamSize; i++)		// wczytywanie do listy stanowisk
	{
		listB[i] = members[i].job;
	}

	for (int i = 0; i < teamSize; i++)		// wczytywanei do listy pseudonimow
	{
		listC[i] = members[i].nick;
	}

	for (int i = 0; i < teamSize; i++)		// wczytywanie do listy miesznej
	{
		if (members[i].preference == 0)
		{
			listD[i] = members[i].name;
		}
		else if (members[i].preference == 1)
		{
			listD[i] = members[i].job;
		}
		else
		{
			listD[i] = members[i].nick;
		}
	}

	showmenu();

	char choice;
	cin >> choice;

	while (choice != 'q')//(!(choice == 'Q' || choice == 'q'))
	{
		switch(choice)
		{
		case 'a': 
		{
			for (int j = 0; j < teamSize; j++)			// petla nr 1 testujaca kolejne slowa
			{
				for (int k = 0; k < teamSize-1; k++)	// petla nr 2 - zmiana porownywanych slow
				{
					int m = 0;							// petla 3 - porownywanie kolejnych liter w lancuchach
					if (listA[k][0] < listA[k + 1][0])
					{
						continue;						// powrot do petli nr 2
					}
					else if (listA[k][m] == listA[k + 1][m])
					{
						m++;
					}
					else if (listA[k][0] > listA[k + 1][0])
					{
						temp[strSize] = listA[k];
						listA[k] = listA[k+1];
						listA[k+1] = temp[strSize];
					}
				}
			}
			cout << "\nLista wg Twojego wyboru:\n\n";
			for (int i = 0; i < teamSize; i++)
			{
				cout << listA[i] << endl;
			}
			cout << endl;
		} 
		break; 
	
		case 'b': 
		{
			for (int j = 0; j < teamSize; j++)					// petla nr 1 testujaca kolejne slowa
			{
				for (int k = 0; k < teamSize - 1; k++)			// petla nr 2 - zmiana porownywanych slow
				{
					int m = 0;									// petla 3 - porownywanie kolejnych liter w lancuchach
					if (listB[k][0] < listB[k + 1][0])
					{
						continue;								// powrot do petli for nr 2
					}
					else if (listB[k][m] == listB[k + 1][m])
					{
						m++;
					}
					else if (listB[k][0] > listB[k+1][0])
					{
						temp[0] = listB[k];
						listB[k] = listB[k + 1];
						listB[k + 1] = temp[0];
					}
				}
			}
			cout << "\nLista wg Twojego wyboru:\n\n";
			for (int i = 0; i < teamSize; i++)
			{
				cout << listB[i] << endl;
			}
			cout << endl;
			break;
		}

		case 'c': 
		{
			for (int j = 0; j < teamSize; j++)			// petla nr 1 testujaca kolejne slowa
			{
				for (int k = 0; k < teamSize-1; k++)		// petla nr 2 - zmiana porownywanych slow
				{
					int m = 0;
					if (listC[k][0] < listC[k + 1][0])	// petla 3 - porownywanie kolejnych liter w lancuchach
					{
						continue;						// powrot do petli nr 2
					}
					else if (listC[k][m] == listC[k + 1][m])
					{
						m++;
					}
					else if (listC[k][0] > listC[k+1][0])
					{
						temp[0] = listC[k];
						listC[k] = listC[k + 1];
						listC[k + 1] = temp[0];
					}
				}
			}
			cout << "\nLista wg Twojego wyboru:\n\n";
			for (int i = 0; i < teamSize; i++)
			{
				cout << listC[i] << endl;
			}

			cout << endl;
			break;
		}
		
		case 'd':
		{
			for (int j = 0; j < teamSize; j++)			// petla nr 1 testujaca kolejne slowa
			{
				for (int k = 0; k < teamSize-1; k++)	// petla nr 2 - zmiana porownywanych slow
				{
					int m = 0;							// petla 3 - porownywanie kolejnych liter w lancuchach
					if (listD[k][0] < listD[k + 1][0])
					{
						continue;						// powrot do petli for nr 2
					}
					else if (listD[k][m] == listD[k + 1][m])
					{
						m++;
					}
					else if (listD[k][0] > listD[k + 1][0])
					{
						temp[strSize] = listD[k];
						listD[k] = listD[k + 1];
						listD[k + 1] = temp[strSize];
					}
				}
			}
			cout << "\nLista wg Twojego wyboru:\n\n";
			for (int i = 0; i < teamSize; i++)
			{
				cout << listD[i] << endl;
			}
			cout << endl;
			break;
		}	
		default: cout << "Nie ma takiej opcji\a\nWybierz raz jeszcze.\n";
		}
		showmenu();
		cin >> choice;
	}
	//cout << "Program zaraz ulegnie zamknieciu."; // opcjonalne
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//cin.get();

	//delete [] temp;		//zwalnianie pamiecie przez usuniecie wskaznikow (x5)
	delete [] listA;
	delete [] listB;
	delete [] listC;
	delete [] listD;

	return 0;
}

void showmenu()
{
	cout << "\nWybiesz tryb wyswietlania czlonkow zakonu ZPDW:\n\n";
	cout << "a) Lista wg imion\t\tb) Lista wg stanowisk\n";
	cout << "c) Lista wg pseudonimow\t\td) lista wg preferencji\n\n";
	cout << "q) Koniec\n\n";
}
