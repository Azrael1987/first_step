// forstr2.cpp -- tworzenie tabliczy 'odwrotnej'
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	cout << "Podaj slowo: ";
	string word;
	cin >> word;

	// fizycznie modyfikujemy obiekt string
	char temp;
	int i, j;
	for (i = 0, j = word.size() - 1; j > i; i++, j--)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << endl;
	cin.get();
	cin.get();
	return 0;
}
