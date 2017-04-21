// twotemps.cpp - (171) - listing 8.12 - uzycie przeciazonych funkcji

#include <iostream>

template <typename T>		// orginalny szablon
void Swap(T &a, T &b);

template <typename T>		// przeciazony szablon
void Swap(T *a, T *b, int n);

void show(int *a);

const int Lims = 8;
using namespace std;

int main()
{
	int i = 5, j = 15;
	cout << "i, j = " << i << " , " << j << ".\n";
	cout << "Uzycie funkcji obslugujacej typ int, "
		"wygeneraowana przez kompilator: \n";
	Swap(i, j);											// orginalny szablon
	cout << "Teraz i , j = " << i << " , " << j << ".\n";

	int d1[Lims] = {2,1,0,4,2,0,1,7};
	int d2[Lims] = { 0,6,0,5,2,0,1,7 };

	cout << "tablice poczatkowe:\n";
	show(d1);
	show(d2);
	cout << "tablice po zmianie:\n";
	Swap(d1, d2, Lims);						//pasuje do nowego szablonu
	show(d1);
	show(d2);

	cin.get();
	return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void Swap(T *a, T *b, int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void show(int * a)
{
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4; i < Lims; i++)
		cout << a[i];
	cout << endl;
}
