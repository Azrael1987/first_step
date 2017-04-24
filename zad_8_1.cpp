// zad_8_1.cpp - 175 - zadanie  1 z rodzialu 8 - przeciazenia funkcji

#include <iostream>

int Show(const char * str);


int Show(const char * str, int a);

using namespace std;

int count = 1;

int main()
{
	char text[50];
	int x;
	char choice;

	do {
		cout << "Podaj tekst do wyswietlenia:";
		
		cin.getline(text, 50);
		cout << "Podaj parament lub wcisnij enter";
		cin >> x;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (x != '\0')
		{
			Show(text);
			count++;

		}
		else
		{
			Show(text, x);
			count++;
		}

		cout << "Czy chcesz kontynuowa? (Y/N)";
		
		cin >> choice;
	} while (choice == 'Y' || choice == 'y' || choice == 'T' || choice == 't');

	cin.get();
	return 0;
}

int Show(const char * str)
{
	cout << str << " wariant A" << endl;
	int c = 1;
	return c;
}


int Show(const char * str, int a)
{
	int d = count;
	for (int i = 0; i < d; i++)
	cout << str << " wariant B" <<endl;
	
	return d;
}
