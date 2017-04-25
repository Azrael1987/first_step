// zad_8_1.cpp - 175 - zadanie  1 z rodzialu 8 - przeciazenia funkcji

#include <iostream>
#include <limits>

void Show(const char * str);

void Show(const char * str, const char * str2);

using namespace std;

int licznik = 1;

int main()
{
	cout << "Program pobierajcy 1 lub 2 argumenty."<< endl;
	cout << "Dla 1 argumentu wyswietla tekst, a dla 2 argumentow " << endl;
	cout << "wyswietla tekst tyle razy ile funkcja byla razy wywolana." << endl;
	cout << "Ilosc nie zalezna od 2 parametru.\n\n";

	char text[50];
	char text2[50];
	char choice;

	do {
		cout << "Podaj tekst do wyswietlenia: ";
		cin.get();									// przejmuje z buforu zbedny enter
		cin.getline(text, 50);
		cout << "Podaj parament lub wcisnij enter: ";
		cin.getline(text2, 50);
		
		if ((strlen(text2))==0)
		{
			Show(text);
			licznik++;		
		}
		else if (strlen >0)
		{
			Show(text, text2);
			licznik++;
		}
				cout << "Czy chcesz kontynuowa? (Y/N)";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y' || choice == 'T' || choice == 't');

	cin.get();
	return 0;
}

void Show(const char * str, const  char * str2)
{
	int d = licznik;
	cout << " (wariant 1 po podaniu 2 argumentow)" << endl;
	for (int i = 0; i < d; i++)
		cout << str << endl;
	cout << "Tutaj drugi argument to " << str2<<endl<< endl;
}

void Show(const char * str)
{
	cout <<" (wariant 2 po podaniu 1 argumentu)" << endl;
	cout << str << endl<< endl;
}
