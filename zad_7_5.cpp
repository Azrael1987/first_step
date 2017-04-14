// zad_7_5.cpp - zadanie 5 rodzial 7 - (151) - funkcja rekurencyjna obliczajaca silnie parametru calkowitego

#include <iostream>
#include <cmath>

using namespace std;
int number = 1;
long silnia(int number);
int main()
{
	int test;				// liczba testowanych liczb
	cout << "Podaj ilosc liczb do przetestowania: ";
	cin >> test;
	for (int j = 0; j < test; j++)
	{
		cout << "\nPodaj liczbe dodatnia ktorej silnie chesz obliczyc: ";
		cin >> number;

		long wynik = silnia(number);
		
		if (number <0)
			cout<< fabs(number) << "! = " << wynik;
		else
			cout << number << "! = " << wynik;
	}
	cout << "\nDo widzenia : )";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

long silnia(int number)
{
	long total = 1;
	int count = 0;
	

	if (number < 0)
	{
		cout << "Silnie liczymy z liczb >= 0.\n";
		number = fabs(number);
	}
	if (number == 0)			// silnia z zera
	{
		total = 1;
	}
	else
	{

		for (int i = 0; i < number; i++)
		{
			total *= (i + 1);
			silnia(number - 1);
		}
	}
	return  total;
}
