// zad_10_2b.hpp - zadanie 2 z rozdzialu 10 - (198) - test klasy Person
// kompilowac z zad_10_2a.cpp

#include <iostream>
#include <string>
#include "zad_10_2a.hpp"


int main()
{
	Person one;						// wywolanie konstruktora domyslnego
	Person two("Kowalski");			// wywolanie konstruktora z jednym agrumentem domyslnym
	Person three("Nowak", "Jacek");	// wywolanie konstruktora bez arbumentow domyslnych
	
	one.Show();
	one.FormalShow();
	two.Show();		 
	two.FormalShow();
	three.Show();
	three.FormalShow();

	std::cout << "Gotowe !" << std::endl;

	system("pause");
	return 0;
}
