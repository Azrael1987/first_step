// zad_5_6.cpp -- zadanie 6 rodzial 5  -- zestawienie sprzedaży z uzyciem tabeli 2-wymiarowej

#include <iostream>
#include <string>
int main()
{
	using namespace std;
	const int Years = 3;			// kolumna z latami
	const int Month = 12;			// wiersze z miesiacami
	string MonthList[Month];		// tabela z nazwami miesiecy
	MonthList[0] = "January";
	MonthList[1] = "Febuary";
	MonthList[2] = "March";
	MonthList[3] = "April";
	MonthList[4] = "May";
	MonthList[5] = "June";
	MonthList[6] = "July";
	MonthList[7] = "August";
	MonthList[8] = "September";
	MonthList[9] = "October";
	MonthList[10] = "November";
	MonthList[11] = "December";

	int YearList[Years] =			// tablica z numerami rocznikow
	{
		2000,
		2001,
		2002
	};
	
	int sales[Month][Years];			// dwuwymiarowa tablica sprzedazy meisiecznych

	cout << "Program do gromadzenia danych o sprzedazy miesiecznej." << endl<< endl;
	
	
	for (int i = 0; i < Years; i++)			// petla zmieniajaca rok
	{
		for (int j = 0; j < Month; j++)		// petla zmieniajaca miesiac
		{
			cout << "Podaj sprzedaz z miesiaca " << MonthList[j] << " z roku " << i + 2000 << ": "<< endl;
			cin >> sales[j][i];
			cin.get();
		}
	};
	cout << "Dziekuje za podanie danych :)" << endl << endl;
	cout << "Sprzedaz w latach 2000-2002." << endl << endl;
	
	cout << "\t\t";						//formatowanie  prezentowanych danych - naglowek
	for (int k = 0; k < Years; k++)		//formatowanie  prezentowanych danych - naglowek
	{
		cout << YearList[k] << "\t";
	}
	cout << endl<<endl;

	for (int n = 0; n < Month; n++)
	{
		//cout << endl;
		cout.width(10);								//wymuszenie szerokosci pola
		cout << left << MonthList[n] << "\t";		// wyrownanie do lewej krawedzi (right, internal)
		for (int m = 0; m < Years; m++)
		{
			cout << sales[n][m] << "\t" /*<< endl*/;
		}
			cout << endl;
	};
	cout << endl;

	cout << "Zestawienie roczne" << endl <<endl;

	int Ysales[Years] = { 0,0,0 };			// tablica sprzedazy rocznej
	for (int g = 0; g < Years; g++)			// petla sumojaca sprzedaz z jednego roku
	{
		for (int h = 0; h < Month; h++)
			Ysales[g] = Ysales[g] + sales[h][g];
	};

	for (int r = 0; r < Years; r++)			// petla wyswietlajaqca zestawienie z poszczegolnych lat
	{
		cout << YearList[r] << " \t" << Ysales[r] << "\n";
	}
	cout << endl;

	cout << "Zestawienie globalne." << endl << endl;
	int Gsales = 0;					// wartosc sprzedazy globalnej

	for (int f = 0; f < Years; f++)		// petla sumujaca sprzedaz globalna
	{
		Gsales = Gsales + Ysales[f];
	}
	cout << "Suma calkowitej sprzadazy wynosi: " << Gsales << endl;

	cin.get();
	return 0;
}
