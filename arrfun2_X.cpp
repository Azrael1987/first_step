// arrfun2_X.cpp -- (131) - listing 7.6 - funkcje z tablica jako parametr II - wybor wczytywanych elementow
// funkcja z 2 wymiarowa

#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);				// prototyp funkcji sumujaca  tab jednowymiarowa
int sum_arr2(int arr2[][4], int size);			// prototyp funkcji sumujaca  tab dwuwymiarowa

int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	int a[6][4] = { {1,2,3,4},{5,6,7,8}, {9,10,11,12}, {0,0,1,1},{5,2,3,6},{2,3,5,1} };
	
	int total2 = sum_arr2(a, 3); 
	std::cout << "Suma trzech pierwszych wierszy tablicy a wynosi: " << total2 << std::endl;
	total2 = sum_arr2(a, 6);
	std::cout << "Suma wszystkich wierszy w tablicy a wynosi: " << total2 << std::endl;
	total2 = sum_arr2(a + 3, 3);
	std::cout << "Suma od czwartego do szostego wiersza tablicy a wynosi: " << total2 << std::endl;

	std::cout <<std::endl<< cookies << " = adres tablicy, ";			// czasem wymagane unsigned cookies
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

int sum_arr2(int arr2[][4], int size)
{
	int total2 = 0;
	for (int r = 0; r < size; r++)
		for (int c = 0; c < 4; c++)
			total2 += arr2[r][c];
	return total2;
}
