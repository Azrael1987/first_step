// zad_8_3.cpp - (177) - zadanie 3 z rodzialu 8 - funkcja zmieniająca małe litery na duze

#include <iostream>
#include <string>
#include <limits>

using namespace std;

void Switch2(string & str);

int main()
{
	string str2;

	cout << "Program do konwersji malych liter na duże." << endl;
	cout << "Podaj  tekst do konwersji:\n";
	getline(cin, str2);
	while (str2 != "q")
	{
		Switch2(str2);
		cout << "Podaj kolejny tekst do konwersji:\n";
		getline(cin, str2);
	} 
	cout << endl << "Do zobaczenia :)";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return 0;
}

void Switch2(string & str)
{
	//int n = size(str);		// alternatywnie w standardzie C
	int k = str.size();
	
	for (int i = 0; i < k; i++) 
	{
		str[i] = toupper(str[i]);
	}
	cout << str << endl;
}
