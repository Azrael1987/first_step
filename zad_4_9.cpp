// -- zad_4_9.cpp - zadanie 9 z rodzialu 4

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	struct batonik		// delkaracja struktury batonik
	{
		char name[20];
		float weight;
		int kalorie;
	};

	batonik * pb = new batonik[3];		// alokacja tablicy dynamicznej za pomoca operatora new

	return 0;
}
