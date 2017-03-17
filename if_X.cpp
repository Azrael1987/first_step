// if.cpp -- uzycie instrukcji if

#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')		// koniec przy koncu zdania
	{
		if (ch == ' ')		// spawdzamy czy  ch jest spacja
		{
			++spaces;
		}
		++total;
		cin.get(ch);
	}
	cout << "W zdaniu wystepuje " << spaces << " spacji, lacznie jest " << total << " znakow. \n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     // X - oproznia bufor
	cin.get();
	return 0;
}
