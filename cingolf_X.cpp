// cingolf-X.cpp -- petla pobierajaca liczby z pominiecem  innych znakow -- listing 6.13 - (114)
#include <iostream>

const int Max = 5;
int main()
{
	using namespace std;

	double golf[Max];			/*logicznie bylo by dac int poniewaz wyniki w golfie to liczby calkowite 
	ale chcialem zeby program przyjmowal rowniez wartosci zmiennoprzecinkowe*/
	cout << "Prosze podac swoje wyniki w golfa.\n";
	cout << "Musisz podac " << Max << " wynikow.\n";
	int i;

	for (i = 0; i < Max; i++)
	{
		cout << "Tura " << i + 1 << ".: ";
		while (!(cin >> golf[i]))               // X - usuwanie niechcianego strumienia
		{
			cin.clear();					//zerowanie obiektu cin
			while (cin.get() != '\n')
			{
				continue;					//pozbycie sie blednych danych
			}
				cout << "Prosze podac liczbe: ";
		}
	}
		// wyliczenie sredniej
	double total= 0.0;
	for (int j = 0; j < Max; j++)
	{
		total += golf[j];
	}
		cout << "Srednia wynikow z " << Max << " tur to: " << total / Max << ".\n";
		cout << "Suma punktow to: " << total << "! Grtuluje!\n";
	cin.get();
	cin.get();
	return 0;
}
