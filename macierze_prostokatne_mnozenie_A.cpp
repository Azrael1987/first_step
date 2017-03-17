// macierze_prostokatne_mnozenie_A.cpp -- program do mnozenia macierzy prostokatnych (92)
#include <iostream>

int main()
{
	using namespace std;
	int colA;
	int rowA;
	cout << "Progrma do monozenia i dzielenia macierzy.\n\n";
	cout << "Mnozyc mozna tylko macierz o rozmiarze Y na X przez macierz X na Y\n\n";
	cout << "Podaj ilosc poziomych wierszy w I macierzy: ";
	cin >> rowA;
	cin.get();
	cout << "Podaj ilosc pionowych kolumn w I macierzy: ";
	cin >> colA;
	cin.get();

	int rowB = colA;
	int colB = rowA;
	int colC = rowA;
	int rowC = rowA;
	
	int** macierzA = new int *[colA];			// ze wzgledu na  ksztalt  poziomy pierwszego elementu  w calym probramie el maja  strukture a[col][row] a nie tak jak w macierzy a[row][col]
	for (int i = 0; i < colA; i++)				// Tworzenie macierzy A
	{
		macierzA[i] = new int[rowA];
	}
	cout << "utworzylem macierz A (wymiar " << rowA << " na " << colA << ")\n\n";

	int** macierzB = new int *[colB];			// Tworzenie macierzy B
	for (int j = 0; j < colB; j++)
	{
		macierzB[j] = new int[rowB];
	}
	cout << "utworzylem macierz B (wymiar " << rowB << " na " << colB << ")\n\n";

	int** macierzC = new int *[rowA];			// Tworzenie macierzy C
	for (int k = 0; k < rowA; k++)
	{
		macierzC[k] = new int[rowA];
	}
	cout << "utworzylem macierz C (wymiar " << rowC << " na " << colC << ")\n\n";

	cout << "Czas podac el. I macierzy" << endl << endl;
	for (int r = 0; r < rowA; r++)				// przyjmowanie wartosci el macierz A
	{
		for (int c = 0; c < colA; c++)
		{
			cout << "Podaj element a" << r + 1 << c + 1 << ": ";
			cin >> macierzA[c][r];
			cin.get();
		}
	};
	cout << endl;

	cout << "Czas podac el. II macierzy" << endl << endl;
	for (int r = 0; r < rowB; r++)				// przyjmowanie wartosci el macierz B
	{
		for (int c = 0; c < colB; c++)
		{
			cout << "Podaj element b" << r + 1 << c + 1 << ": ";
			cin >> macierzB[c][r];									
			cin.get();
		}
	};
	cout << endl;

	for (int r = 0; r < rowC; r++)			// zerwoanie macierzy wynikowej
	{
		for (int c = 0; c < colC; c++)
		{
			macierzC[c][r] = 0;				
		}
	}

	cout << "Twoja macierz A wyglada nastepujaca:" << endl << endl;
	for (int r = 0; r < rowA; r++)				// wypisanie macierzy A
	{
		for (int c = 0; c < colA; c++)
		{
			cout << "\t" << macierzA[c][r];				
		}
		cout << endl;
	};
	cout << endl << endl;

	cout << "Twoja macierz B wyglada nastepujaca:" << endl << endl;
	for (int r = 0; r < rowB; r++)			// wypisanie macierzy B
	{
		for (int c = 0; c < colB; c++)
		{
			cout << "\t" << macierzB[c][r];			
		}
		cout << endl;
	};
	cout << endl;

	for (int i = 0; i < rowA; i++)					// obliczanie  wartosci  el. macierzy C
	{
		for (int j = 0; j < colB; j++)		
		{
			int m;
			for (m = 0; m < colA; m++)		
			{
				macierzC[j][i] = (macierzC[j][i]) + ((macierzA[m][i]) * (macierzB[j][m])); 
			}
		}
	}

	cout << "Twoja macierz C=A*B wyglada nastepujaca:" << endl << endl;		// wypisanie macierzy C
	for (int r = 0; r < rowC; r++)
	{
		for (int c = 0; c < colC; c++)
		{
			cout << "\t" << macierzC[c][r];			
		}
		cout << endl;
	};
	
	delete [] macierzA;			// usuwanie wskaznika i zwalnianie pamieci
	delete [] macierzB;			// jak wyzej
	delete [] macierzC;			// jak wyzej
	
	cout << endl << endl;
	cin.get();
	return 0;
}
