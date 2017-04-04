// func_arr_str.cpp -- (139) - listing 7.13 - funkcja obslugujaca tablice obiektow string

#include <iostream>
#include <string>

using namespace std;
const int SIZE = 5;

void display(const string sa[], int n);				//(stała tablica typu string, rozmiar tablicy)

int main()
{
	string list[SIZE];			// tablica 5 obiektow string
	cout << "Podaj " << SIZE << "ulubionych widokow nieba : \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "\nTwoja lista:\n";
	display(list, SIZE);		// wywolanie funcji (adres tablicy, rozmiar)
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return 0;
}

void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ". " << sa[i] << endl;
}

