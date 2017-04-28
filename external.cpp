// external.cpp - 184 - listing 9.5 -- zmienne zewnetrzne - wykozystanei slowa "extern"
// kompilowac lacznie  z support.cpp

#include <iostream>

using namespace std;

// zmienne zewnetrzne
double warming = 0.3;		// definicja (deklaracja  definiujaca) zmiennej warming

// prototyp funkcji
void update(double dt);
void local();

int main()		// korzysta ze zmiennych globalnych
{
	cout << "Globalne ocieplenie wynosi " << warming << " stopni.\n";
	update(0.1);
	cout << "Globalne ocieplenie wynosi " << warming << " stopni.\n";
	local();
	cout << "Globalne ocieplenie wynosi " << warming << " stopni.\n";

	system("pause");
	return 0;
}
