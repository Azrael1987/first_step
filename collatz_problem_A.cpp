// collatz_problem_A.cpp -- program sukajacy w ciagu liczby 1 - ciaga  zawarty w programie to proglem Collatza ktory zalozyl 
// ze kazdy ciag spelniajacy  zaleznosc X_n+1 = X_n /2 (dla parzystych) i X_n+1 = 3*X_n+1 + 1 (dla mieparzystych) 
// zmierza do petli 1, 4, 2, 1, 4, 2 nei zlaeznie od wartosci od wartosci  el X_0

#include<iostream>

using namespace std;
int main()
{
	long long s;					// ilosc liczb do przetestowania
	//long long first_number;			// liczba podana przez uzytkowanika - pcozatkowa wartosc ciagu
	long long element;				// watrosc n=tego elementu ciagu
	cout << "\nPodaj iloesc liczb do sprawdzenia czy dadza 1 jako el ciagu: ";
	cin >> s;
	
	for (int i = 0; i < s; i++)
	{
		cout << "Podaj wartosc " << i+1 << " elementu ciagu: ";
		cin >> element;
		while (element != 1)
		{
			if (element % 2 == 0)
			{
				element = element / 2;
				cout << element<< endl;
			}
			else
			{
				element = 3 * element + 1;
				cout << element<< endl;
			}
		}
	}
	cout << "\nGotowe :)";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
