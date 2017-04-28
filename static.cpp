// static.cpp - 186 - listing 9.9 - stosowanie lokalnej zmiennej statycznej

#include <iostream>

// stale:
const int ArSize = 10;

// prototypy funkcji
void strcount(const char * str);

int main()
{
	using namespace std;
	char input[ArSize];
	char next;

	cout << "Wprowadz wiersz:\n";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')		// wiersz nie zmiescil sie w buforze!
			cin.get(next);			// porzucenie reszty znakow z wejscia
		strcount(input);
		cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
		cin.get(input, ArSize);
	}
	
	system("pause");
	return 0;
}

void strcount(const char * str)
{
	using namespace std;
	static int total = 0;			// statyczna zmeinna lokalna
	int count = 0;					// automatyczna zmienna lokalna

	cout << "\"" << str << "\" zawiera ";
	while (*str++)					// przejdz na koniec ciagu
		count++;
	total += count;
	cout << count << " znakow\n";
	cout << "Lacznie " << total << " znakow.\n";
}
