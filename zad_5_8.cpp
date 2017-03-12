// zad_5_8.cpp -- zadanie 8 z rodizału 5 - program do podliczanie ilosci wyrazow w tekscie

#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string word;
	string test= "gotowe";
	int i = 0;
	cout << "Program do liczenie slow w tekscie.\n";
	cout << "Wspisz swoj tekst. \nSlowo 'gotowe' zakonczy podliczanie."<<endl;
	for (i = 0; word != test;i++)
	{
		
		cin >> word;
	}
	for (int j = 0; j < i; j++)
	{
		cin.get();
	}
	cout << "\nWprowadziles dokladnie " << i-1 << " slow. :)";
	cin.clear();
	//cin.ignore();
	//cin.get();
	cin.get();

	return 0;
};
