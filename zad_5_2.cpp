// zad_5_2.cpp -- program liczacy silnie z wykozystaneim tablicy array - 100!
#include <iostream>
#include <array>
const int SizeAr = 101;
int main()
{
	using namespace std;
	long double sil = 1;
	array <long double, SizeAr>factorials;
	factorials[0] = factorials[1] = 1LL;
	cout << "Oto silnie liczb od 0 do 100: " << endl << endl;
	cout << "0! = " << factorials[0] << endl;
	cout << "1! - " << factorials[1] << endl;
	for (int i = 2; i < SizeAr; i++)
	{
		factorials[i] = factorials[i-1] * i;
		cout << i << "! = " << factorials[i] << endl;
	}
	cout << "To juz wszystkei liczby z przedzialu. " << endl;
	cin.get();
	return 0;
}
