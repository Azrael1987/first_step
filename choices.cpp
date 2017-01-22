// chioces.cpp -- wariacje na temat tablic

#include <iostream>
#include <vector> // STL C++98
#include <array>	// C++11

int main()
{
	using namespace std;
		// C, C++
	double a1[4] = { 1.2, 2.4, 3.6, 4.8 };
		// C++98
	vector<double> a2(4); // utworzenei  vector-a z 4 elementami
		// brak prostego sposobu inicjalizowania w C98
	a2[0] = 1.0 / 2.0;
	a2[1] = 1.0 / 3.0;
	a2[2] = 1.3 / 2.4;
	a2[3] = 3.3 / 4.3;
		// C++11 -- utowrzenie  izainicjowanie obiektu array
	array<double, 4> a3 = { 3.5, 3.14 , 4.7 , 8.2 };
	array<double, 4> a4;
	a4 = a3;
		// dozwolone dla obiektow array o tym samym rozmiarze i typie
		// uzycie indeksowania typowego dla tablic wbudowanych
	cout << "a1[2]: " << a1[2] << " pod adresem " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " pod adresem " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " pod adresem " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " pod adresem " << &a4[2] << endl;
		// naduzycie bo zajmie pamiec innego el z innej tablicy
	a1[-2] = 20.2;
	cout << "a1[-2]: " << a1[-2] << " pod adresem " << &a1[-2] << endl;
	cout << "a3[2]: " << a3[2] << " pod adresem " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " pod adresem " << &a4[2] << endl;

	cin.get();
	return 0;
}
