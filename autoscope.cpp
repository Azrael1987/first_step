// autoscope.cpp - 183 - listing 9.4 - ilustracja zasiegu zmiennych automatycznych

#include <iostream>

using namespace std;
void oil(int x);

int main()
{
	int texas = 31;
	int years = 2015;

	cout << "W funkcji main() texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "W funkcji main() years = " << years << ", &years = ";
	cout << &years << endl;
	
	oil(texas);

	cout << "W funkcji main() texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "W funkcji main() years = " << years << ", &years = ";
	cout << &years << endl;

	system("pause");
	return 0;
}

void oil(int x)
{
	int texas = 5;
	cout << "W funkcji oil() texas = " << texas << ", &texas = "; // zachowa nazwe zmieni wartość i adres 
	cout << &texas << endl;
	cout << "W funkcji oil() x = " << x << ", &x = ";			//  zachowa wartosc zmieni adres i nazwe
	cout << &x << endl;

	{
		int texas = 124;
		cout << "Wewnatrz bloku texas = " << texas << ", &texas = ";
		cout << &texas << endl;
		cout << "Wewnatrz bloku oil() x = " << x << ", &x = ";
		cout << &x << endl;
	}
	cout << "Za blokiem texas = " << texas << ", &texas = ";
	cout << &texas << endl;
}
