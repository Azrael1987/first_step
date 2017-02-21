// sotowanie_liczb.cpp -- program sortujacy liczby rosnaco i malejaco
#include <iostream>
int main()
{
	using namespace std;
	const int size = 5;
	int tab[size];
	int temp[1];
	int n, p;

	for (int i = 0; i < size; i++)			// przyjmowanie liczb
	{
		cout << "Podaj " << i+1 << " liczbe: ";
		cin >> tab[i];
		cin.get();
	}
	cout << "test:\n1: " << tab[0] << "\n2: " << tab[1] << "\n3: " << tab[2] << "\n4: " << tab[3] << "\n5: " << tab[4] << endl;
	cout << "Liczby zostaly przyjete\n";
	for (int j = 0; j < size; j++) // zmienia badana liczbę Xn
	{
		cout << "Petla 2 dziala\n";			// zmainia porownywana liczba Yn z liczba X
		for (int k = 0; k < 4; k++)
		{
			cout << "krok: " << k + 1 <<" " << endl;
			if (tab[k] > tab[k + 1]) // sprawdzanie  ktora liczba jest wieksza i wieksza przemieszczenie nizej
			{
			cout << "petla 4 dziala"<<endl;
			temp[0] = tab[k];
			tab[k] = tab[k + 1];
			tab[k + 1] = temp[0];
			}
			cout << "petla nr 3 dziala\n";
			cout << "test:\n" << tab[0] << ", " << tab[1] << ", " << tab[2] << ", " << tab[3] << ", " << tab[4] << endl;
		}
	}
	cout << "test:\n1:" << tab[0] << ", " << tab[1] << ", " << tab[2] << ", " << tab[3] << ", " << tab[4] << endl;
	cout << "Kolejnosc chronologiczna: " <<endl;
	for (int m = 0; m < size; m++)						// wypisuje  liczby chronologicznie
	{
		cout << tab[m] << endl;
	}
	cout << "To juz wszystkie liczby." << endl;
	cout << "A teraz sortowanie malejaco: " << endl;
	for (n = 0, p=size-1; n<=p; ++n, --p)	// odrwaca kolejnosc liczb w tablicy
	{
		temp[0] = tab[n];
		tab[n] = tab[p];
		tab[p] = temp[0];
	}
	for (n = 0; n < size ; n++)
	{
		cout << tab[n] << endl;	// wypisuje  liczy z tablicy po zmianie kolejnosci
	}
cin.get();
return 0;
}
