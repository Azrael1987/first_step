// not_X.cpp -- uzycie operatora not -- listing 6.7

#include <iostream>
#include <climits>				// dla  INT_MAX i INT_MIN

bool is_int(double);			// funkcja tesatujaca czy liczba jest z zakresu intiger
int main()
{
	using namespace std;
	double num;

	cout << "Podaj liczbe calkowita: ";
	cin >> num;
	while (!is_int(num))			// petla dziala dopki liczba num nei jest  z zakresu int
	{
		cout << "Poza zakresem - probuj dalej\n";
		cout << "Liczba powinna zawierac sie miedzy: " << INT_MIN << " a " << INT_MAX << ".\n";
		cin >> num;
	}
	int val = int(num);			// rzutowanie typu z double na int
	cout << "Podana liczba calkowita to: " << val << "\nBywaj\n";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

bool is_int(double x)							// X - definiowanie funkcji
{
	if (x <= INT_MAX && x >= INT_MIN)			// uzycie wartosci climits
		return true;
	else
		return false;
}
