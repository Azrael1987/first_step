// more_and.cpp -- uzycie operatora logicznej koniunkcji II  -- listing 6.6

#include <iostream>

const char * qualify[4] =		// tablica wskaznikow lancuchow przechowywujaca dyspliny sportowe
	{
		"bieg na 10 km.\n",
		"przeciaganie liny w blocie.\n",
		"pojedynek mistrzow canoe.\n",
		"rzut nalesnikiem.\n"
	};

int main()
{
	int age;						// zmienna przechowujaca wiek uzytkowanika
	int index;						// zmienna przechowujaca wynik petli z wiekiem
	

	std::cout << "Podaj swoj wiek: ";
	std::cin >> age;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	std::cout << "Kwalfikujesz sie do konkurencji " << qualify[index];

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}
