// zapis_do_pliku_X.cpp -- pragram sluzacy do eksportowania danych do pliku *.txt

#include <iostream>
# include <fstream>			// biblioteka do zapisu danych  do pliku
#include <string>

int main()
{
	using namespace std;
	
	cout << "Program sluzacy do zapisywania wizytowek do pliku *.txt.\n";
	string name, surname;
	int call_number;

	cout << "Podaj swoje imie: ";
	cin >> name;
	cout << "Podaj swoej nazwisko: ";
	cin >> surname;
	cout << "Podaj swoj nr telefonu: ";
	cin >> call_number;

	fstream plik; // zmienna plikowa
	plik.open("wizytowka.txt", ios::out | ios::app); // otwarcie pliku do zapisu i przekierowanie danych do pliku
													// ios::app - dołacz do  istniejacego pliku
	plik << name << endl;
	plik << surname << endl;
	plik << call_number << endl;

	plik.close();		// zamkniecie pliku

	cin.get();
	return 0;
}
