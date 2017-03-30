// arrfun2_X.cpp -- (131) - listing 7.6 - funkcje z tablica jako parametr II - wybor wczytywanych elementow

#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);				// prototyp funkcji

int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

	std::cout << cookies << " = adres tablicy, ";			// czasem wymagane unsigned cookies
	std::cout << sizeof cookies << " = prawdziwa wielkosc tablicy.\n";
	
	int sum = sum_arr(cookies, ArSize);
	std::cout << "\nZjedzone ciasteczka = " << sum <<std::endl << std::endl;

	sum = sum_arr(cookies, 3);			// Zliczamy tylko 3 pierwsze el tablicy
	std::cout << "Pierwsze 3 osoby zjadly: " << sum << " ciasteczek.\n"<< std::endl;			

	sum = sum_arr(cookies + 4, 4);		
	// zliczamy tylko 4 el zaczynajac od 5 el <-- (&cookies[4])	== (cookies + 4)
	std::cout << "Ostatnie 4 osoby zjadly: " << sum << " ciasteczek.\n"<< std::endl;			

	std::cin.get();
	return 0;
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr, ";		// czasem wymagane rutowanie typu unsigned (arr)
	std::cout << sizeof arr << " = sizeof arr - wielkosc zmiennej wskaznikowej\n";
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}
