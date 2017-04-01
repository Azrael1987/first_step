// strgfun.cpp -- (134) - listing 7.9 - funkcja z lancuchami znakowami jako parametr 
// zliczonie ilosci wystepujacych znakow w lancuchu znakowym

#include <iostream>

unsigned int c_in_str(const char * str, char ch);		// prrototyp funkcji - wskaznik na stala typu char
// unsigned int c_in_str(const char str[], char ch);		// alternatywny prototyp funkcji
int main()
{
	using namespace std;
	char mmm[15] = "minimum";		// lancuch w tablicy
	char *wail = "ululate";			// wail wskazuje lancuch znakowy

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');

	cout << ms << " znakow m w " << mmm << endl;
	cout << us << " znakow u w " << wail << endl;
	cin.get();
	return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
	unsigned int count = 0;
	
	while (*str)			// koniec gdy *str jest rowny '\0' czyli natrafia na null w lancuchu
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}
