// zad_4_5.cpp -- zad 5 rozdzial 4

#include<iostream>

int main() {
	using namespace std;

	struct batonik {
		char marka[20];
		double waga;
		int kalorie;
	};

	batonik snack = { "Mocha Munch", 2.3 , 350 };

	cout << "Stuktura snack zawiera: " << endl;
	cout << "Marka: " << snack.marka << endl;
	cout << "Waga: " << snack.waga << endl;
	cout << "Kalorie: " << snack.kalorie << endl;
	cin.get();
	return 0;

}
