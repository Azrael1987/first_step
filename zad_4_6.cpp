// zad_4_6.cpp -- zadanie 6 z rodzialu 4

#include <iostream>
int main() 
{
	using namespace std;
	struct batonik 
	{
		char marka[20];
		double waga;
		int kalorie;
	};

	batonik box[3]={
		{"Mars" , 120.5 , 340},
		{"Milkyway", 123.4 ,230},
		{"Lion", 12.5 , 43}
	};
	cout << "Marka: " << box[0].marka << endl;
	cout << "Waga: " << box[0].waga << endl;
	cout << "Kalorie: " << box[0].kalorie << endl << endl;
	cout << "Marka: " << box[1].marka << endl;
	cout << "Waga: " << box[1].waga << endl;
	cout << "Kalorie: " << box[1].kalorie << endl << endl;
	cout << "Marka: " << box[2].marka << endl;
	cout << "Waga: " << box[2].waga << endl;
	cout << "Kalorie: " << box[2].kalorie << endl;

	cin.get();
	return 0;
}
