// mixtypes.cpp -- nie ktore kombinacje typow

# include <iostream>

struct antarctica_years_end
{
	int year;
	/* inne dane */
};

int main()
{
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end * pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3]; // tablica 3 struktur
	trio[0].year = 2003;
	std::cout << trio->year << std::endl;
	const antarctica_years_end * arp[3] = { &s01, &s02, &s03 };
	std::cout << arp[1]->year << std::endl;
	const antarctica_years_end ** ppa = arp;
	auto ppb = arp; // automatyczne dedukcja typu w c++11
					// ew. uzyc const antarctica_years_end ** ppb = arp;
	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppb + 1))->year << std::endl;
	std::cin.get();
	return 0;
}
