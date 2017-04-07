// zad_7_2.cpp -- (146) - zadanie 2 z rodzialu 7 - funkcje wykonujace operacje na tablicach

#include <iostream>
using namespace std;
const int Max = 10;

int type_score(double score[], int Max);				// przyjmuje wartosci
double av_score(double score[], int i);			// liczy srednia
void show_score(double av, double score[], int i);			// wypisuje wszystkei wartosci

int main()
{
	double score[Max];
	
	int i = type_score(score, Max);
	double av = av_score(score, i);
	show_score(av, score, i);
	
	cout << "Gotowe.\n";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

int type_score(double score[], int Max)
{
	double temp;
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "Podaj wartosc nr " << i + 1 << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie danych przerwane.\n";
			break;
		}
		else if (temp < 0)		// wymuszenie konca
			break;
		score[i] = temp;
	}
	return i;
}

double av_score(double score[],  int i)
{
	double total = 0.0;
	for (int j = 0; j < i; j++)
	{
		total += score[j];
	}
	double av = total /i;
	return av;
}

void show_score(double av, double score[], int i)
{
	cout << "\nTwoje wyniki to:\n";
	for (int k = 0; k < i; k++)
	{
		cout << score[k] << ", ";
	}
	cout << "\nTwoja srednia to:\n";
	cout << av << endl;
}
