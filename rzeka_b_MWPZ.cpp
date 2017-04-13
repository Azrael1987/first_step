// rzeka_b_MWPZ.cpp - zadanie z Mistrzostw Wielekopolski w programowonia zespolowym 2012. 
// program wyznacza droge wyscigu gdzie trasa w jak najwiekszym stopni ma byc wytyczona rzeka (y=0),
// -10^5 <= s1,f1 <= 10^5. 0 <s2 . f1 <= 10^5. s1 != f1

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long route;			// ilosc tras do przeanalizowania
	
	double s1;				// wspolrzedna X startu
	double s2;				// wspolrzedna Y startu
	double f1;				// wspolrzedna X mety
	double f2;				// wspolrzedna Y mety
	double total;

	cout << "Podaj ilosc tras: ";
	cin >> route;
	for (int i = 0; i < route; i++)
	{
		cout << "Podaj wspolrzedna X punktu startowego w trasie nr " << i + 1 << " ";
		cin >> s1;
		cout << "Podaj wspolrzedna Y punktu startowego w trasie nr " << i + 1 << " ";
		cin >> s2;
		cout << "Podaj wspolrzedna X punktu koncowego w trasie nr " << i + 1 << " ";
		cin >> f1;
		cout << "Podaj wspolrzedna Y punktu koncowego w trasie nr " << i + 1 << " ";
		cin >> f2;
		
		// jesli  bieg od statu do mety wzdluz osi X jest krótszy od 2 odleglosci od mety do rzeki (wzdluz osi Y) to rezygnujemy z plywania
				
		 if ((s1 <= 0 && f1 <= 0)||(s1 >0 && f1 >0))
		{
			if (fabs(f1 - s1) < (2 * f2))
			{
				total = fabs(s2 - f2) + fabs(s1 - f1);
				cout << "\nTrasa nr " << i + 1 << " zoptymalizowana pod katem plywania ma dlugosc: " << total << endl << endl;
			}
			else
			{
				total = s2 + f2 + fabs(s1 - f1);
				cout << "\nTrasa nr " << i + 1 << " zoptymalizowana pod katem plywania ma dlugosc: " << total << endl << endl;
			}
		} 
		else if ((s1 > 0 && f1 <= 0) || (s1 <= 0 && f1 > 0))
		{
			if ((fabs(s1) + fabs(f1)) < 2 * f2)
			{
				total = fabs(f1) + fabs(s1) + fabs(f2 - s2);
				cout << "\nTrasa nr " << i + 1 << " zoptymalizowana pod katem plywania ma dlugosc: " << total << endl << endl;
			}
			else
			{
				total = s2 + f2 + fabs(s1) + fabs(f1);
				cout << "\nTrasa nr " << i + 1 << " zoptymalizowana pod katem plywania ma dlugosc: " << total << endl <<endl;
			}
		}
		else 
			cout << "Blad danych\n"; 
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
