// cctypes.cpp -- uzycie bibliotek ctype.h  -- listing 6.8 -- (nie obsluguje polskich znakow)

#include <iostream>
#include <cctype>

int main()
{
	using namespace std;
	cout << "Podaj tekst do analizy, zakoncz go wpisujac znak @.\n";

	char ch;				// zmienna przechowujaca znaki
	int whitespace = 0;		// liczninik bialych znakow
	int digits = 0;			// licznik liczb
	int chars = 0;			// licznik liter
	int punct = 0;			// licznik znakow przystankowych
	int others = 0;			// licznik pozostalych znakow

	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else
			others++;
		cin.get(ch);
	}
	cout << "Tekst zawiera: \n- " << chars << " liter\n";
	cout << "- " << whitespace << " bialych znakow\n";
	cout << "- " << digits << " cyfr\n";
	cout << "- " << punct << " znakow przystankowych\n";
	cout << "- " << others << " innych znakow\n";

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
