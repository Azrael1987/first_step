// ifelse.cpp -- uzycie instrukcji ifelse - listing 6.2 + zastepowanie znakow (102)

#include <iostream>
//#include <limits>
int main()
{
	using namespace std;
	char ch;

	cout << "pisz zdania, a ja bede powtarzal.\n";
	cin.get(ch);

	while (ch != '.')			// wykonuj dopoki nie pojawi i kropka
	{
		if (ch == '\n')			// jesli wczytasz enter wyswietl go
		{
			cout << ch;
		}
		else
		{						// kazdy inny znak  zamieniaj na sasiedni
			cout << ++ch;
		}
		cin.get(ch);
		
	}
	cout << "\nNowa wersja tekstu.\n";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
