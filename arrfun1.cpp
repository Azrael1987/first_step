// arrfun1.cpp -- (130) - listing 7.5 - funkcja sumujaca zawartosc tablicy

#include <iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n);	//arr = nazwa tablicy, n  = wielkosc tablicy - w rzeczywistosci wskaznik nie tablica !

int main()
{
	using namespace std;
	int  cookies[ArSize] = { 1,2,4,8,16,32,64,128 };			// czasem wymagany przedrostek static

	int sum = sum_arr(cookies, ArSize);			// ( nazwa tablicy , rozmiar tablicy )
	cout << "Ilosc zjedzonych ciastek to : " << sum << endl;

	cin.get();
	return 0;
}

// zwraca sume talbicy calkowicieliczbowej
int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}
