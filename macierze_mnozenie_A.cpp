// macierze_mnozenie_A.cpp -- program do mnozenia macierzy - narazie tylko kwadratowych

#include <iostream>

int main()
{
	using namespace std;
	int col;
	int row;
	cout << "Progrma do monozenia i dzielenia macierzy.\n\n";
	cout << "Mnozyc mozna tylko macierz o rozmiarze Y na X przez macierz X na Y\n\n";
	cout << "Podaj ilosc poziomych wierszy w I macierzy: ";
	cin >> col;
	cin.get();
	cout << "Podaj ilosc pionowych kolumn w I macierzy: ";
	cin >> row;
	cin.get();

	int ** macierzA = new int *[col];
	for (int i = 0; i < col; i++)
	{
		macierzA[i] = new int[row];
	}
	cout << "utworzylem macierz A (wymiar X na Y)\n\n";

	int ** macierzB = new int *[row];
	for (int j = 0; j < col; j++)
	{
		macierzB[j] = new int[col];
	}
	cout << "utworzylem macierz B (wymiar Y na X)\n\n";

	int ** macierzC = new int *[row];
	for (int k = 0; k < row; k++)
	{
		macierzC[k] = new int[row];
	}
	cout << "utworzylem macierz C (wymiar Y na Y)\n\n";

	cout << "Czas podac el. I macierzy" << endl << endl;
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << "Podaj element a" << r + 1 << c + 1 << ": ";
			cin >> macierzA[r][c];
			cin.get();
		}
	};
	cout << endl;

	cout << "Czas podac el. II macierzy" <<endl <<endl;
	for (int r = 0; r < col; r++)
	{
		for (int c = 0; c < row; c++)
		{
			cout << "Podaj element b" << r + 1 << c + 1 << ": ";
			cin >> macierzB[r][c];
			cin.get();
		}
	};
	cout << endl;

	for (int r = 0; r < row; r++)			// zerwoanie macierzy wynikowej
	{
		for (int c = 0; c < col; c++)
		{
			macierzC[r][c] = 0;
		}
	}

	cout << "Twoja macierz A wyglada nastepujaca:" << endl << endl;
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << "\t" << macierzA[r][c];
		}
		cout << endl;
	};
	cout << endl<<endl;

	cout << "Twoja macierz B wyglada nastepujaca:" << endl << endl;
	for (int r = 0; r < col; r++)
	{
		for (int c = 0; c < row; c++)
		{
			cout << "\t" << macierzB[r][c];
		}
		cout << endl;
	};
	cout << endl;

	for (int i = 0; i < row; i++)			//mnozenie macierzy
	{
		for (int j = 0; j < row; j++)
		{
			int m, n;
			for (m =0,n=j; m < col; m++)
			{
				macierzC[i][j] = macierzC[i][j] + (macierzA[i][m] * macierzB[m][j]);
				cout << "krok " << m + 1 << "wartosc po kroku dla el. c"<< i<<j<<" "<<macierzC[i][j]<<endl;
			}
		}
	}

	cout << "Macierz C ma forme:\n\n";

	cout << "Twoja macierz C=A*B wyglada nastepujaca:" << endl << endl;
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < row; c++)
		{
			cout << "\t" << macierzC[r][c];
		}
		cout << endl;
	};
	cout << endl << endl;
	cin.get();
	return 0;
}
