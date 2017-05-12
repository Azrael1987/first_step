// usestock01.cpp -- (194) - Listing 10.6 - stosowanie klasa Stock
// kompilować ze stock01.cpp

#include <iostream>
#include "stock01.hpp";

int main()
{
	{
		using std::cout;
		using std::ios_base;

		cout << "Tworzenie nowych obiektow przy uzyciu konstruktorow\n";
		Stock stock1("NamoSmart", 10, 12.50);		// wariant 1
		stock1.show();
		Stock stock2 = Stock("PolDrew", 2, 2.0);	// wariant 2
		stock2.show();

		cout << "Przypisanie stock1 do stock2: \n";
		stock2 = stock1;
		cout << "Wypisz stock1 i stock2;\n";
		stock1.show();
		stock2.show();

		cout << "Wyzerowanie obiektu konstruktoraem (przez nadpisanie)\n";
		stock1 = Stock("FruitPol", 10, 50.8);			// obiekt tymczasowy
		cout << "Nowa wersja stock1:\n";
		stock1.show();
		cout << "\nGotowe.\n";
	}

	system("pause");
	return 0;
}
