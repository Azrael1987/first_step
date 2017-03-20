// jump.cpp -- uzycie continue i break -- listing 6.12

#include <iostream>
const int ArSize = 80;

int main()
{
	using namespace std;
	char line[ArSize];
	int space = 0;

	cout << "wypisz wiersz tekstu:\n";
	cin.get(line, ArSize);
	cout << "\nCaly wiersz tekstu:\n" << line << endl;
	cout << "Teksat do pierwszej kropki:\n";
	for (int i = 0; line[i] != '\0'; i++)		// \0  -- znak kropki
	{
		cout << line[i];		// pokaz znak
		if (line[i] == '.')		// jesli jest kropka to  konczymy
			break;
		if (line[i] != ' ')
			continue;
		space++;
	}
	cout << "\nW tekscie jest:" << endl << space << " spacji\n";
	cout << "\nGotowe!";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
