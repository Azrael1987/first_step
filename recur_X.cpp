//recur_X.cpp - (141) -- listing 7.16 - uzycie rekurencji

#include <iostream>

void countdown(int n);		// prototyp funkcji z rekurecja - inicjujacej sama siebie

int main()
{
	countdown(4);			// wywolanie funkcji rekurencyjnej
	
	std::cout << "\nKazde n z 1 instrukcji ma inny adres niz sasiednie,\nale ma tez odpowiednik w 2 instrukcji ";
	std::cout << "A1 B1 C1 D1 D2 C2 B2 A2";
	std::cin.get();
	return 0;
}

void countdown(int n)
{
	using namespace std;
	cout << "Odliczanie...  " << n << " (n spod adresu " << &n << ")" << endl;		// 1 instrukcja
	if (n > 0)																		// sprawdzanie warunku
		countdown(n - 1);															// funkcja wywoluje sama siebie
	cout << n << ". Ba-bach!" << "\t (n spod adresu " << &n << ")\n";					// 2 instrukcja
}
