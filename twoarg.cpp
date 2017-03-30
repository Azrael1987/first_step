// twoarg.cpp -- funkcja dwuparametrowa -- listing 7.3 - (128)

#include <iostream>

using namespace std;

void n_chars(char , int  );			// prototyp funkcji

int main()
{
	char ch;
	int times;

	cout << "Podaj znak: ";
	cin >> ch;

	while (ch != 'q')
	{
		cout << "Podaj liczbe calkowita: ";
		cin >> times;
		n_chars(ch, times);			// wywolanie funkcji 2-argumentowej
		cout << "\nPodaj nastepny znak; liter q konczy program: ";
		cin >> ch;
	}
	cout << "Wartosc zmiennej time to " << times << ".\n";
	cout << "Do widzenia.";
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void n_chars(char c, int n)			// deklaracja funkcji - wyswietl znak c n razy
{
	while (n-- > 0)					// dopoki n nie osiagnie wartosci 0
	{
		cout << c;
	}
}
