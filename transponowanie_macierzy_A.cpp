// transponowanie_macierzy.cpp -- transponowanie macierzy z zapisem do pliku (90)
#include <iostream>
#include<fstream>

int main()
{
	using namespace std;
	const int row = 3;				// ilosc wierszy w macierzy
	const int col =4;				// ilosc kolumn w macierzy
	
	ofstream outFile;								// utworzenie obiektu na wyniki o nazwie outFile
	outFile.open("macierz_transponowana.txt", ios::out | ios::app);		// powiazanie obiektu z plikiem, zapisuj | aktualizuj
	
	cout << "Program do transponowania macierzy." << endl << endl;

	int A[row][col];
	int B[col][row];

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << "Podaj element a" << r+1 << c+1 << ": ";
			cin >> A[r][c];
			B[c][r] = A[r][c];
			cin.get();
		}
	}; 
	cout << endl;

	cout << "Twoja macierz A wyglada nastepujaca:" << endl << endl;
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << "\t" << A[r][c];
		}
		cout << endl;
	}; 
	cout << endl;

	cout << "Twoja macierz transponowana B=A^T wyglada nastepujaca:" << endl << endl;
	for (int r = 0; r < col;r++)     // ilosc wierszy w maciezy B jest przyrownywana do ilosci kolumn macierzy A
	{
		for (int c = 0; c < row; c++)	// ilosc kolumn w maciezy B jest przyrownywana do ilosci wierszy macierzy A
		{
			cout << "\t" << B[r][c];
		}
		cout << endl;
	};
	cout << endl;

	// zapisywanie wynikow do pliku tekstowego

	outFile << "Twoja macierz A wyglada nastepujaca:" << endl << endl;		// zapisywanie macierz A
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			outFile << "\t" << A[r][c];
		}
		outFile << endl;
	};
	outFile << endl;

	outFile << "Macierz transponowana B=A^T:" << endl << endl;	// zapisywanie macierz A
	for (int r = 0; r < col; r++)     // ilosc wierszy w maciezy B jest przyrownywana do ilosci kolumn macierzy A
	{
		for (int c = 0; c < row; c++)	// ilosc kolumn w maciezy B jest przyrownywana do ilosci wierszy macierzy A
		{
			outFile << "\t" << B[r][c];
		}
		outFile << endl;
	};
	outFile << endl;

	outFile.close();

	cin.get();
	return 0;
}
