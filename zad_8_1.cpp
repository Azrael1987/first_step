// zad_8_1.cpp - 175 - zadanie  1 z rodzialu 8 - przeciazenia funkcji

#include <iostream>

int Show(const char * str);

template<class T>
int Show(const char * str, T a);

using namespace std;

int count = 0;

int main()
{
	int count = 1;
	char text[50];
	char text2[50];
	char choice;

	do {
		cout << "Podaj tekst do wyswietlenia:";
		
		cin.getline(text, 50);
		cout << "Podaj parament lub wcisnij enter";
		cin.getline(text2, 50);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (strlen(text2) == 0)
		{
			Show(text, text2);
			count++;

		}
		else
		{
			Show(text);
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

template<class T>
int Show(const char * str, T a)
{
	int d = 1;
	for (int i = 0; i < a; i++)
	cout << str << " wariant B" <<endl;
	
	return d;
}
