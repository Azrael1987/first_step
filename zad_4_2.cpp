//  zad_4_2.cpp -- zadanie 2 z rodzialu 4

#include <iostream>
#include <string>
int main()
{
	using namespace std;
	const int ArSize = 20;
	string name;
	string dessert;

	cout << "Podaj swoje imie: \n";
	getline (cin, name);
	cout << "Podaj nazwe deseru: \n";
	getline(cin, dessert);
	cout << "Mam dla Ciebie " << dessert << ", " << name << "." << endl;
	cin.get();
	return 0;

}
