// file02.cpp - 189 - Prata 443/6 - pytania sprawdzajace
// kompilowac z file01.cpp

#include <iostream>
using namespace std;
extern int x;
namespace
{
	int y = 4;
}

void another()
{
	cout << "Funkcja another(); " << x << ", " << y << endl;
}
