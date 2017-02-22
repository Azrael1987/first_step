//textin3.cpp -- wczytywanie znakow do konca petli

#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);		// proba  oczytania znaku
	while (cin.fail() == false)		// spradzanie EOF
	{
		count++;
		cout << ch;		// licznik
		cin.get(ch);	// proba  oczytania kolejnego znaku
	}
	cout << "wczytano " << count << " znakow.\n";
	cin.clear();		//zeruje flagę EOF	
	return 0;
}
