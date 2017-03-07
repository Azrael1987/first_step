// macierze_suma_roznica.cpp -- program przyjmujacy wartosci macierzy a nastepnie sumujacy i odejmujacy je od siebie

#include <iostream>

int main()
{
	using namespace std;

	const int row = 3;		// ilosc wierszy w macierzy
	const int col = 2;		// ilosc kolumn w macierzy
	int A[row][col];		// tablica 2-wymiarowa dla I macierzy
	int B[row][col];		// tablica 2-wymiarowa dla II macierzy
	int C[row][col];		// tablica 2-wymiarowa dla sumy macierzy A + B
	int D[row][col];		// tablica 2-wymiarowa dla roznicy macierzy A \ B
	int E[row][col];		// tablica 2-wymiarowa dla roznicy macierzy B \ A

	cout << "Program sluzacy do sumowania i odejmowania od siebie macierzy " <<row << "x" <<col << endl << endl;
	for (int r = 0; r < row; r++)	// tablica dwuwymairowa do przechowanie el. I macierzy
	{
		for (int c = 0; c < col; c++)
		{
			cout << "Podaje elemnet a" << r + 1 << c + 1 << " z I macierzy: ";
			cin >> A[r][c];
			cin.get();
		}
	};
	cout << "\nPierwsza macierz zostala wporwadzona.\n\n";
	
	for (int r = 0; r < row; r++)	// tablica dwuwymairowa do przechowanie el. II macierzy i obliczenia sumy oraz rożnic macierzy
	{
		for (int c = 0; c < col; c++)
		{
			cout << "Podaje elemnet b" << r + 1 << c + 1 << " z II macierzy: ";
			cin >> B[r][c];
			C[r][c] = A[r][c] + B[r][c];			// suma macierzy A+B
			D[r][c] = A[r][c] - B[r][c];			// roznica macierzy A/B
			E[r][c] = B[r][c] - A[r][c];			// roznica macierzy B/A
			cin.get();
		}
	};
	cout << "\nDruga macierz zostala wporwadzona.\n\n";
	cout << "Macierz A wyglada nastepujaco:\n\n";
	for (int r = 0; r < row; r++)						// Wyswietlanie I macierzy
	{
		for (int c = 0; c < col; c++)
		{
			cout << "\t" << A[r][c];
		}
		cout << endl<<endl;
	}

	cout << "Macierz B wyglada nastepujaco:\n\n";
	for (int r = 0; r < row; r++)							// Wyswietlanie II macierzy
	{
		for (int c = 0; c < col; c++)
		{
			cout << "\t" << B[r][c];
		}
		cout << endl<<endl;
	}

	cout << "Macierz C=A+B wyglada nastepujaco:\n\n";
	for (int r = 0; r < row; r++)							// Wyswietlanie III macierzy
	{
		for (int c = 0; c < col; c++)
		{
			cout << "\t" << C[r][c];
		}
		cout << endl << endl;
	}

	cout << "Macierz D=A\\B wyglada nastepujaco:\n\n";
	for (int r = 0; r < row; r++)							// Wyswietlanie IV macierzy
	{
		for (int c = 0; c < col; c++)
		{
			cout << "\t" << D[r][c];
		}
		cout << endl<<endl;
	}
	
	cout << "Macierz E=B\\A wyglada nastepujaco:\n\n";
	for (int r = 0; r < row; r++)							// Wyswietlanie V macierzy
	{
		for (int c = 0; c < col; c++)
		{
			cout << "\t" << E[r][c];
		}
		cout << endl <<endl;
	}

	cin.get();
	return 0;
}
