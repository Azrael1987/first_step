// stacker.cpp - (196) - listing 10.12 -- test klasy Stack
// kompilowac razem z stack.cpp

#include "stack.hpp"
#include <iostream>
#include <cctype>			// albo ctype.h

int main()
{
	using namespace std;

	Stack st;			// tworzy pusty stos
	char ch;
	unsigned long po;

	cout << "Nacisnij D, aby wporwadzic dekalracje podatkowa\n"
		<< "P, aby przetworzyć deklaracje, lub K, aby zakonczyc.\n";

	while (cin >> ch && toupper(ch) != 'K')
	{
		while (cin.get() != '\n')		// odrzuca resztke wprowadzanego na wejscie wiersza
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'D':
		case 'd': cout << "Podaj numer nowej deklaracji: ";
			cin >> po;
			if (st.isfull())
				cout << "Stos pelny!\n";
			else
			{
				st.push(po);
				cout << "Utworzono deklaracje nr " << po << ".\n";
			}
			break;
		case 'P':
		case 'p': if (st.isempty())
			cout << "Stos pusty!\n";
				  else
				  {
					  st.pop(po);
					  cout << "Deklaraca nr " << po << " zdjeta\n";
				  }
				  break;
		}
		cout << "\nNacisnij D, aby wporwadzic dekalracje podatkowa\n"
			<< "P, aby przetworzyć deklaracje, lub K, aby zakonczyc.\n";
	}

	cout << "Przerwa na kawe :)\n";

	system("pause");
	return 0;
}

