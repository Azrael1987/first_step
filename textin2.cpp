// textin2.cpp -- wczytywanie znakow  w petli while - do poprawy

#include<iostream>
int main()
{
	using namespace std;
	char ch;		// zmienna literowa
	int count = 0;		// licznik wprowadzanych znakow

	cout << "Podaj tekst do wprowadzenia; # konczy ciag znakow." << endl;
	cin.get(ch);
	
	while (ch != '#')
	{
		
		cout <<ch;		//wyswietl znak
		++count;		//dolicz znak
		
		cin.get(ch);		//pobierz nastepny znak
		
	}
	cout << "\nWprowadziles " << count << " znakow" << endl;
	 for (int i = 0; i <= count; i++)		//pochalnia entery ale nie wiem czemu nie wszystkie
	{
		cin.get();
	}
	cin.get();
	cin.get();
	cin.get();
	cin.get();
	return 0;
}
