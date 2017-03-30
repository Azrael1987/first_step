// lotto_X.cpp -- prawdopodobienstwo wygranej - listing 7.4 - (129) -- przemiennosc mnozenia z dzieleniem aby uniknac przeplenienia zmiennej

#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main()
{
	double total, choices;		                                    // wszystkie liczby, ilosc skreslen

	cout << "Podaj najwieksza liczbe jaka mozna wybrac: ";
	cout << "Oraz liczbe skreslen: ";

	while ((cin >> total >> choices) && choices <= total)         // X - wczytywanie  2 argumentow kolejno
	{
		cout << "Szansa na  wygrana to 1 do ";
		cout << probability(total, choices) << endl;		            // wyliczenie wyniku
		cout << "Podaj nastepen 2 liczby lub wcisnij q aby zakonczyc.";
	}
	cout << "Do widzenia.";
	cin.get();
	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;			// lokalne zmienne
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
	{
		result = result *n / p;           // przemiennosc mnozenia z dzieleniem aby uniknac przeplenienia zmiennej
	}
	return result;
}
