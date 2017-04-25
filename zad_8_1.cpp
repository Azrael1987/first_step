// zad_8_1.cpp - 175 - zadanie  1 z rodzialu 8 - przeciazenia funkcji

#include <iostream>
#include <limits>

int Show(const char * str);


int Show(const char * str, int a);

using namespace std;

int licznik = 1;

int main()
{
	
	char text[50];
	int x;
	char choice;

	do {
		//
		cout << "Podaj tekst do wyswietlenia: ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.getline(text, 50);
		cout << "Podaj parament lub wcisnij enter: ";
		cin >> x;
		
		if (x != '\0')
		{
			Show(text, x);
			licznik++;

		}
		else
		{
			Show(text);
			licznik++;
		}

		cout << "Czy chcesz kontynuowa? (Y/N)";
		x = '\0';
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> choice;
	} while (choice == 'Y' || choice == 'y' || choice == 'T' || choice == 't');

	cin.get();
	return 0;
}


int Show(const char * str, int a)
{
	int d = licznik;
	for (int i = 0; i < d; i++)
	cout << str << " wariant 1" <<endl;
	cout << "Tutaj a=" << a << endl;
	
	return d;
}

int Show(const char * str)
{
	cout << str << " wariant 2" << endl;
	int c = 1;
	return c;
}
