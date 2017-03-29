// calling.cpp -- listing 7.1 -- (126) - definiowanie, prototypowanie i wywolywanie funkcji

#include <iostream>

void simple();	//prototyp funkcji

int main()
{
	using namespace std;
	cout << "main() wywola funkcje simple():\n";
	simple();			// wywolanie funkcji
	cout << "main() po zakonczeniu funkcji simple().\n";
	
	cin.get();
	return 0;
}

void simple()
{
	using namespace std;
	cout << "Jestem sobie taka prosciutka funkcja.\n:)";
}
