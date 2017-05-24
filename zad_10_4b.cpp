// zad_10_4b.cpp - (200) -  zadanie 4 z rodzialu 10 - testowanie klasy z przestrzenia nazw
// kompilowac razem z zad_10_4a.cpp

#include <iostream>
#include "zad_10_4a.hpp"
//#include "zad_10_4a.cpp"

int main()
{
	using namespace SALES;

	int n;
	cout << "Program wyznaczajacy max i min wartosc oraz srednia.\n\n";

	cout << "Ile liczb chcesz zwerfikowac z przedzialu od 2 do 8: ";
	cin >> n;
	Sales bilans = Sales(n);
	bilans.showSales();

	system("pause");
	return 0;
}
