// usestoc00.cpp - Listing 10.3 - (193) - program uzywajacy klasy Stock
// kompilować razem z stock00.cpp i stock00.hpp

#include <iostream>
#include "stock00.hpp"

int main()
{
	Stock fluffy_the_cat;		// utworzenie obiektu klasy Stock

	fluffy_the_cat.acquire("NanoSmart", 20, 12.50);			// zakup 1 pakietu akcji
	fluffy_the_cat.show();									// wyswietl dane
	fluffy_the_cat.buy(15, 18.125);							// zakup dodatkowych akcji
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400, 20.00);						// proba sprzedazy wiekszej ilosc akcji niz jest dostepne
	fluffy_the_cat.show();
	fluffy_the_cat.buy(3000, 40.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(3000, 0.125);
	fluffy_the_cat.show();

	system("pause");
	return 0;
}
