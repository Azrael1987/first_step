// twofile1.cpp - 185 - listing 9.7 -- zmienne z laczenie zewnetrzym i wewnetrznym
// kompilowac razem z twofile2.cpp

#include <iostream>
int tom = 3;				// definicja zmiennej zewnetrznej
int dick = 30;				// definicja zmiennej zewnetrznej
static int harry = 300;		// zmienna statyczna, laczenie wewnetrzne

							// prototypy funkcji
void remote_access();

int main()
{
	using namespace std;
	cout << "Funkcja main() zwaraca nastepujace adresy:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry. \n\n";
	remote_access();
	
	system("pause");
	return 0;
}
