// for_range-based_loop.cpp -- przyklady petli zakresowej for
#include <iostream>
int main()
{
	using namespace std;

	double prices[5] = { 4.99, 5.45, 23.00,12.25, 20.05 };		//tablica z danymi wejsciowymi
	cout << "Ceny z tablicy"<< endl;
	for (double x : prices)		 // petla zakresowa wypisujace wszystkei elementy z tablicy
	{
		cout << x << endl;
	}
	cout << "ceny po 20% obnizce" << endl;
	for (double &x : prices)		/*  petla zakresowa podyfikujaca wszystkie  wartosci  tablicy 
										uzywajac symolu '&' pozwala na modyfikacje
										wypisanie wszystkich elementów */
	{
		x = x * 0.80;
		cout << x << endl;
	}
	cout << "Ilosc dostepnych sztuk zainicjowanych lista" << endl;
	for (int x : {3, 4, 2, 6, 7})		// petla zakresowa wypisujaca  el. zaincjowanie lista
	{
		cout << x << " ";
		cout << "\n";
	}
	cin.get();
	return 0;
}
