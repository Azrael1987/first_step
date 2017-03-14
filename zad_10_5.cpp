// zad_10_5.cpp -- zadanie 10 z rodzialu 5 -- wypiswanie  rzadanej ilosci wierszy z gwiazdkami
#include<iostream>

int main()
{
	using namespace std;

	int n, i, j, k, m;


	cout << "Program wypisjacy podana ilosc wierszy z gwazdkami. \nKazdy wiersz ma tyle gwiazdek ile jego numer pozadkowy.";
	cout << "\nWolne miejsca zajmuja kropki." << endl << endl;
	cout << "Podaj liczbe wierszy: ";
	cin >> n;			// liczba wierszy z gwiazdkami
	cin.get();
	for (i = 0, j=n-1; i < n; j--, i++)		
	{
		for (m = j; m > 0; m--)			// petla okreslajaca ilosc  kropek w wierszu
		{
			cout << ".";
		}
		for (k = 0; k <= i; k++)	// petla okreslajaca ilosc gwiazdek w wierszu
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "\nTo juz wszystkie gwiazdki. :)\n";
	cin.get();
	return 0;
}
