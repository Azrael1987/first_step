// firstref.cpp -- 161 - Listing 8.2 - definiowanie i uzycie referencji
#include <iostream>

using namespace std;

int main()
{
	int rats = 101;
	int & rodents = rats; // rodents staje sie  aliasem dla rats

	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents <<endl;
	rodents++;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	cout << "adres rats - " << &rats << endl;
	cout << "adres rodents - " << &rodents << endl;
	
	cin.get();
	return 0;
}
