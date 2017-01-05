// delete.cpp -- uzycie operatora delete
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
char * getname(void);	// prototyp funkcji
int main()
{
	char * name;	// utworzenie wskaznika bez przypisania pamieci

	name = getname();	// przypisanie zmiennej name adresu lancucha
	cout << name << " poda adresem " << (int *) name << "\n";
	delete [] name;	 // zwolnienie pamieci

	name = getname();	// ponowne uzycie zwolnionej pamieci
	cout << name << " pod adresem " << (int *) name << "\n";
	delete[] name;	 // ponowne zwolnienie pamieci
	cin.get();
	cin.get();
	return 0;
}

char * getname()	 // zwraca wskaznik na nowy lancuch
{
	
	char temp[80];	// tymczasowy bufor
	cout << "Podaj nazwisko ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);	// kopiowanie lancucha do krotszej tablicy

   /* If You have error C4996. You should: Project ->project_name properties -> Configuration Properties ->
   C/C++ -> Preprocessor -> Preprocessor Definitions add line _CRT_SECURE_NO_WARNINGS */
	
	return pn;	// po zakończeniu funkcji temp zostanie utracone
}
