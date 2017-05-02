//zad_9_2.cpp - zadanie 2 z rodzialu 9 - program zliczajacy ilosc znakow.

#include <iostream>
#include<string>

// stale:
const int ArSize = 10;

// prototypy funkcji
void strcount(const std::string str);

int main()
{
	using namespace std;
	string input;

	cout << "Wprowadz wiersz:\n";
	getline(cin, input);

	while (input != "")		// sprawdzenie czy wporwadzono tekst
			
	{
		strcount(input);		// wywolanie funkcji zliczajacej
		cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
		input = "";
		getline(cin, input);
	}

	system("pause");
	return 0;
}

void strcount(const std::string str)
{
	using namespace std;
	static int total = 0;			// statyczna zmienna lokalna - nie zeruje sie po wykonaniu programu
	int count = 0;					// automatyczna zmienna lokalna - zeruje sie po wykonaniu programu

	cout << "\"" << str << "\" zawiera ";
	count = str.size();
	total += count;
	cout << count << " znakow\n";
	cout << "Lacznie " << total << " znakow.\n";
}
