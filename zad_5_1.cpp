// zad_5_1.cpp -- zadanie 1 z rozdzialu 5 -- sumator liczb z przedialu <a;b> lub <b;a>

#include <iostream>
int main()
{
	using namespace std;
	int a;					//pierwsza liczba z przedziału
	int b;					//druga liczba z przedziału
	int sum=0;				// suma liczb z przedziału <a;b> lub <b;a>
	cout << "Podaj 2 liczby calkowite" << endl << endl;
	cin >> a;
	cin >> b;

	if (a <= b)				// petla sprawdzajaca ktora z liczb jest wieksza
	{
		for (int i = a; i <= b; i++)
		{
			//cout << " i wynosi " << i << endl;
			sum += i;
		}
		cout << "Suma liczb od " << a << " do " << b << " wynosi " << sum << endl;
	}
	else
	{
		for (int i = b; i <= a; i++)
		{
			//cout << " i wynosi " << i << endl;
			sum += i;
		}
		cout << "Suma liczb od " << b << " do " << a << " wynosi " << sum << endl;
	}
	cin.get();
	cin.get();
	return 0;
}
