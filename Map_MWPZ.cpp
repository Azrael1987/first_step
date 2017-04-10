// Map_MWPZ.cpp -- Program z MWPZ - szukanie najkrotszed drogi do unktu na mapei wedlug wskazowek

#include <iostream>
using namespace std;
int main()
{
	int treasure;			// ilosc  skarbow do znalezienia
	int indicator;			// ilsoc wskazowek

			
	cout << "Porgram do optymalizwowania poszukiwan skabrow.\n";
	cout << "Najpierw podawaj kierunek ruchu:\n0 = Pn, 1 = Pd, 2= W, 3 = Z,";
	cout << "\na nastepnie ilosc krokow\n\n";
	cout << "Podaj ilosc skarbow do znalezienia: ";
	cin >> treasure;
	for (int i = 0; i < treasure; i++)
	{
		int vertical = 0;			// wspolzedna pionowa Y
		int horizontal = 0;		// wspolrzedna pozioma X

		cout << "Podaj ilosc wskazowego do odnalezienia " << i + 1 << " skarbu.";
		cin >> indicator;
		for (int j = 0; j < indicator; j++)
		{

			int direction =0;			// kierunek	swiata
			int step = 0;				// ilsoc krokow

			cout << "Podaj kierunek do " << j + 1 << " wskazowki.";
			cin >> direction;
			cout << "Podaj ilosc krokow do " << j + 1 << " wskazowki.";
			cin >> step;
			if (direction == 0)
			{
				vertical+=step;
			}
			else if (direction == 1)
			{
				vertical -= step;
			}
			else if (direction == 2)
			{
				horizontal += step;
			}
			else if (direction == 3)
			{
				horizontal -= step;
			}
			else
			{
				cout << "Nie ma takiego kierunku!\n wybierz wartosc od 0-3 aby okreslic keirunek";
			}
		}
		if (horizontal == 0 && vertical == 0)
		{
			cout << "Skarb znajduje sie w studni przy ktorej zaczynasz wypawe.\n";
			continue;
		}

		if (vertical > 0)
			cout << "Skarb nr " << i + 1 << " znajduje sie: " << vertical << " metry na polnoc";
		else if (vertical < 0)
			cout << "Skarb nr " << i + 1 << " znajduje sie: " << (-1)*vertical << " metry na poludnie";
		else if (vertical == 0)
			cout << "Skarb nr " << i + 1 << " znajduje sie na szerokosci georaficznej studni";
		else
			cout << "Blad wspolrzednej pionowe!";

		if (horizontal > 0)
			cout << " i " << horizontal << " metry na wschod.\n";
		else if (horizontal < 0)
			cout << " i " << (-1)*horizontal << " metry na zachod.\n";
		else if (horizontal == 0)
			cout << " na dlugosci georaficznej studni";
		else
			cout << "Blad wspolrzednek poziomej!";

	}
	cout << "Wszystkei skarby odnalezione! :)";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
