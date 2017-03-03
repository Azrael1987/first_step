// zad_5_3.cpp -- sumator podanych liczb

#include <iostream>

int main()
{
	using namespace std;
	const int SizeAr = 100;
	int a;
	int tab[SizeAr];

	cout << "Program sumuje podane liczby.\nAby zakonczyc wprowadzanei danych wpisz 0.\n\n";
	
	cout << "Podaj 1 liczbe: ";
	cin >> a;
	tab[0] = a;
	cout << "\nSuma podanych liczb wynosi: " << a << endl;
	for (int i = 1; i < SizeAr /*&& a !=0*/; i++)
	{
		if (a == 0)
		{
			cout << "Wpisales zero.";
			break;
		}
		cout << "Podaj " << i + 1 << " liczbe: ";
		cin >> a;
		cin.get();
		if (a == 0) 
		{
			cout << "Wpisales zero.";
			break;
		}
		tab[i] = tab[i-1] + a;
		cout << "\nSuma podanych liczb wynosi: " << tab [i] << endl;
	} 
	cout << "Koniec wczytywania danych.";
	
	cin.get();
	cin.get();
	return 0;
}
