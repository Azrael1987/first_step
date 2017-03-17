// odczyt_z_pliku.cpp -- program do wczytywania danych z programu (100)

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>		//dla funkcji exit  i atoi

int main()
{
	using namespace std;

	cout << "Program sluzacy do wczytywania wizytowek z pliku *.txt.\n";
	string name, surname;
	int call_number;

	string linia;		// zmienna przechowujaca wczytane dane*/

	fstream plik; // zmienna plikowa

	plik.open("wizytowka.txt", ios::in); // otwarcie pliku 
	if (plik.good() == false)			// sprawdzanei czy plik  kotrego mamy wczytac dane istnieje
	{
		cout << "Plik nie istnieje.";
		cin.get();
		exit(0);
	}

	string line;		// zmienna przechowujaca wczytane dane
	int nr_of_line = 1;

	while (getline(plik, line))
	{
		switch (nr_of_line)
		{
		case 1: name = line;
			cout << name << endl;
			break;
		case 2: surname = line;
			cout << surname << endl;
			break;
		case 3: call_number = atoi(line.c_str());	// atoi - konwertowanie łancucha string na int. nie udana konwersja daje 0
			cout << call_number << endl;
			nr_of_line = 0;
			break;

		}
		nr_of_line++;
	}

	plik.close();		// zamkniecie pliku

	cin.get();
	return 0;
}
