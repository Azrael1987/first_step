// zad_6_1.cpp -- zadnie 1 z rodzialu 6 -- konwersja znakow  przy uzyciu biblioteki <cctype> - (117)

#include <iostream>
#include <cctype>

int main()
{
	using namespace std;

	char ch;

	cout << "Program zmieniajacy male litery na duzo i odwrotnie.\n";
	cout << "Liczby sa pomijane, a  wpisanie \'$\' konczy wczytywanie znakow.\n";
	
	while (cin.get(ch) && ch != '$')
	{
		if(isdigit(ch))
		{
			continue;
		}
		else if (islower(ch))
		{
			ch = toupper(ch);
			cout << ch;
		}
		else if (isupper(ch))
		{
			ch = tolower(ch);
			cout << ch;
		}
		else
			cout << ch;
	}

	cout << "\n\nTo juz koniec Twojego tekstu.\n";

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;

}
