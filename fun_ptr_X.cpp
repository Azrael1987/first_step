// fun_ptr_X.cpp -- (143) - Listing 7.18 - Wskazniki na funkcje
#include <iostream>

// prototypy funkcji
double betsy(int);
double pam(int);
double ralph(int);

// (typ danych przyjmowanych przez f wyjsciowa, wskaznik funkcji typu double majace 1 paramet typu int)
void estimate(int lines, double(*pf)(int));		// koniecznie nawiacy w celu priorytetow

int main()
{
	using namespace std;
	int code;

	cout << "Ile wierszy kodu nalezy napisac? ";
	cin >> code;
	cout << "\nSzacowanie Betsy: \n";
	estimate(code, betsy);
	cout << "Szacowanie Pam: \n";
	estimate(code, pam);
	cout << "Szacowanie Ralph'a: \n";
	estimate(code, ralph);

	cout << "\n:)" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

double betsy(int lns)
{
	return 0.05 * lns;
}

double pam(int lns)
{
	return 0.03 * lns + (0.0004 * lns *lns);
}

double ralph(int lns)
{
	return 0.04 * lns + 0.15;
}

void estimate(int lines, double(*pf)(int))
{
	using namespace std;
	cout << lines << " wierszy wymaga ";
	cout << "wg szkoly Felanicka "<< (*pf)(lines) << " godzin pracy,\n";									// (*pf) - adres funkcja przekazany przez wstażnik *pf - szkola Felanicka
	cout << "a wg szkoly Otwockiej "<< pf(lines) << " godzin pracy.\n\n";		// pf - funkcja, ktorej nazwe reprezentuje wstażnik *pf - szkola Otwocka 
}
