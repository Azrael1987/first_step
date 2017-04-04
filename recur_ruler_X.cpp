// recur_ruler_X.cpp -- (142) - Listing 7.17 - uzycie rekurencji do dzielenia linijki

#include <iostream>
using namespace std;

const int Len = 66;
const int Divs = 6;

void subdivide(char ar[], int low, int high, int level);

int main()
{
	char ruler[Len];
	int i;
	for (i = 1; i < Len; i++)
		ruler[i] = ' ';				//'zerowanie' tabeli przez generowanie 64 x spacji
	ruler[Len - 1] = '\0';			//ustawienie znaku null jako  ostatni el tablicy
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';	// ustawienie | na poczatku i 'koncu' (linijki) tablicy
	cout << ruler << endl;
	
	// rekurecja
	for (i = 1; i < Divs+1; i++)			// petla zmieniajaca poziom
	{
		subdivide(ruler, min, max, i);			
		cout << ruler << endl;		
		for (int j = 1; j < Len - 2; j++)	// petla zmieniajaca miejsce na podzialce w poziomie
			ruler[j] = ' ';					// 'zerowanie' linijki
	}
	cout << "\nLinijka :)";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return 0;
}

void subdivide(char ar[], int low, int hight, int level)
{
	if (level == 0)
		return;
	int mid = (hight + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level-1);
	subdivide(ar, mid, hight, level-1);
}
