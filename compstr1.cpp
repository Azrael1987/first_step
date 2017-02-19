// compstr1.cpp -- porownywanie lancuchow jako tablic
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char word[5] = "?ate";	// start dla 1 wyszukiwania
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
		{
			cout << word << endl;
			word[0] = ch;
		}
	cout <<"Petla sie skonczyla, slowo to: " << word << endl;

	char word2[5] = "home";		//2 szukane slowo
	char word3[5] = "????";	// start dla 2 wyszukiwania
	for (int i = 0; i < 4; i++)
	{
		for (char ch = 'a'; word2[i] != word3[i] ; ch++)
		{
			cout << word3 << endl; /* jesli usune ten wiersz a dodoam wiersz  
			2 linie nizej to  nie bede wyswietlac wszystkich sprawdzancyh wariantów */
			word3[i] = ch;		
		}//cout <<word3<<endl;  // <--- wiersz do dodania
	}
	cout << "2 szukane slowo to : " << word3 << endl;
	cout << "wszystkie slowa znalezione :)" << endl;

	cin.get();
	return 0;
}
