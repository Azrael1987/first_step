// zad_10_5a.cpp - 201 - zadanie 5 z rodzialu 10 - test klasy stock zawierajaca struktury przechowywane na stosie
//kompilowac z zad_10_5a.cpp

#include "zad_10_5a.hpp"
#include <iostream>

int main()
{
	using namespace std;

	char ch;
	const int ArSize = 35;
	//char name[ArSize];
	//double pay;
	Stack st; // pusty stos
	Stack::customer po;		// pusta struktura
	Stack::customer *ps = &po;

	cout << "Nacisnij D, aby wporwadzic platnosc\n"
		<< "U, aby usunac platnosc, lub K, aby zakonczyc.\n";

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
		case 'd': 
		{
			cout << "Podaj numer imie i nazwisko klienta: ";
			cin.getline(po.fullname, ArSize);
			
			//cin.get();

			cout << "Podaj kwote do zaplaty: ";
			cin >> po.payment;
			st.push(ps);
			cout << "Utworzono nowa strukture z platnoscia.\n";
			st.show();
			break;
		}
			
		case 'U':
		case 'u': 
		{
			st.pop(ps);
			cout << "Ostatnia platnosc zostala zdjeta\n";
			st.show();
			break;
		}
				
		}
		cout << "\nNacisnij D, aby wporwadzic dekalracje podatkowa\n"
			<< "U, aby przetworzyć deklaracje, lub K, aby zakonczyc.\n";
	}

	cout << "Przerwa na kawe :)\n";
	
	system("pause");
	return 0;
}
