// zad_10_1b.cpp - (197) - test dla klasy Bank
// kompilować razem z zad_10_1a.cpp
#include "zad_10_1a.hpp"
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	std::string name;
	std::string nr;
	double dep;
	char choice;
	double cash;
	cout << "Witam w naszym banku.\n\n";
	cout << "Aby zalozyc konto podaj swoje imie i nazwisko: ";
	getline(cin, name);
	cout << " oraz numer konta: ";
	cin >> nr;
	cout << "Podaj jaka kwote chcialbys zdeponowac na poczatek: ";
	cin >> dep;
	
	Bank account1 = Bank(name, nr, dep);
	
	menu();
	//cin >> choice;
	while (cin >> choice && (toupper(choice) != 'K'))
	{
		while (cin.get() != '\n')
		{
			continue;
		}
		if (!isalpha(choice))
		{
			cout << "\a\a";
			continue;
		}
		switch (choice)
		{
		case 'D':
		case 'd':	cout << "Podaj kwote do zdeponwoania: ";
					cin >> cash;
					account1.deposit(cash);
					break;
		case 'P':
		case 'p':	cout << "Podaj jaka kwote chcesz wybrac: ";
					cin >> cash;
					account1.withdrawal(cash);
					break;
		case 'S':
		case 's':	cout << "Szczegoly Twojego konta:\n\n";
					account1.show();
					break;
		}
		menu();
	}
	cout << "\nDziekujemy za wizyte w naszym banku :)\n\n";

	system("pause");
	return 0;
}
