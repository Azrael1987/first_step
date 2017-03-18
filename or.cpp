// or.cpp -- uzycie poreatora logicznego alternatywy -- listing 6.4

#include<iostream>

int main()
{
	using namespace std;
	char ch;

	cout << "Ten program moze zatrzymywac czas ;-)" << endl<<endl;
	cout << "Czy chcesz zatrzymac czas? <t/n> ";
	cin >> ch;

	if (ch == 't' || ch == 'T')								// || alternatywa - wystarczy spelnic 1 z 2 warunkow
		cout << "Czas zostal zatrzymany! \a\a\n";			// podwojny sygnal dzwiekowy
	else if (ch == 'n' || ch == 'N')
		cout << "Czas wciaz plynie.\n";
	else
		cout << "nie wybrales  t ani n. Chyba nie masz ochoty na zabawe z czasem ;-)\nDo widzenia :)\n";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
