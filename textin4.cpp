// textin4.cpp -- wczytywanie znaków za pomoca cin.gt();

#include <iostream>
int main(void)
{
	using namespace std;
	int ch;					// użycie typu int zamiast char
	int count = 0;
	

	while ((ch = cin.get()) != EOF)		// sprawdzenie End oF File
	{
		cout.put(char(ch));			// wypisuje znaki metodą cut.put z uwgledniemie jawnego rzutowania typu int na typ char
		++count;
	}
	cout << "wczytano " << count << " znakow. " << endl;
	cin.clear();		 // zeruje flage EOF
	cin.get();
	return 0;
}
