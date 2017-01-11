// potegi_1.cpp -- program który oblicza od 1 do 10 operacji a^b i podaje ostatnia cyfre z wyniku

#include <iostream>

int main()
{
	using namespace std;
	short e;  //ilosc  interpretowanych liczb
	int a;	//podstawa potegi
	int b;	//stopien potegi
	long long c;	//wartosc potegi
	int d;	//ostatnia cyfra warotsci potegi
	int i;	//liczba obiegow petli
	int n;	// licznik opercji matematycznych
	char q; // zamykanie okna programu

	cout << "podaj ilosc opercji matematycznych: ";
	cin >> e;
	n = 0;

	do {
		c = 1;
		cout << "Podaj " << n + 1 << " podstawe potegi: ";
		cin >> a;
		cout << "Podaj " << n + 1 << " wykladnik potegi: ";
		cin >> b;

		n = n + 1;
		if (b == 0)
			c = 1;
		else
		{
			for (i = b; i > 0; i = i - 1)
			{
				c = c*a;
			}
		}
		d = c % 10;

		cout << a << " Podniesione do potegi " << b << " wynosi " << c << endl;
		cout << "Ostatia liczba Twojej potegi to " << d << "\n" << endl;
		cin.get();

	} while (e > n);

	do
	{

		cout << "Czy chesz zamknac prgram ? (y/n)" << endl;
		cin >> q;
	} while (q != 'y');
	cin.get();

	return 0;
}
