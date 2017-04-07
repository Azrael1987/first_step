// zad_7_4.cpp -- (148) - zadanie 4 z rodzialu 7 
// prawdopodobienstwo w loteriach - X liczb z Y mozliwych i dodatkowa liczba z posrod Z
#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks, unsigned super_ball);

int main()
{
	double total_m, choices, total_e;													
  // wszystkie liczby podstawowe, ilosc skreslen, wszystkich liczb do super_ball - X, Y, Z

	cout << "Podaj najwieksza liczbe jaka mozna wybrac: \n";
	cout << "Oraz liczbe skreslen: \n";
	cout << "Podaj ilosc liczb do super_ball'a: \n";

	while ((cin >> total_m >> choices >> total_e) && choices <= total_m)					// wczytywanie 2 argumentow kolejno
	{
		cout << "Szansa na  wygrana to 1 do ";
		cout << probability(total_m, choices, total_e) << endl;						// wyliczenie wyniku
		cout << "Podaj nastepen 3 liczby lub wcisnij q aby zakonczyc.";
	}
	cout << "Do widzenia.";
	cin.get();
	return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned super_ball)
{
	long double result = 1.0;												// lokalne zmienne
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
	{
		result = result *n / p;						 // przemiennosc mnozenia z dzieleniem aby uniknac przeplenienia zmiennej
	}
	result = result  *super_ball;
	return result;
}
