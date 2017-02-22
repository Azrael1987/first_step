//textin3.cpp -- wczytywanie znakow do konca petli

#include <iostream>
int main()
{
	using namespace std;
	cout << " Aby zakonczyc wczytywanie znakow wcisnij (dla Windows'a) ctrl+Z, a potem enter lub (dla Unix'a) ctrl+D"
		<< endl;
	char ch;
	int count = 0;
	cin.get(ch);		// proba  oczytania znaku
	while (cin.good() == true)		// spradzanie EOF
	//while (cin.fail() == false)		// spradzanie EOF -- II metoda
	{
		count++;
		cout << ch;		// licznik
		cin.get(ch);	// proba  oczytania kolejnego znaku
	}
	cout << "wczytano " << count << " znakow.\n";
	cin.clear();		//zeruje flagę EOF	
	cin.get();
	return 0;
}
