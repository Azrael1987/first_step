// zad_9_1_golf.h -- 190 - zadanie 1 z rodzialu 9

#ifndef ZAD_9_1_GOLF_H_INCLUDED
#define ZAD_9_1_GOLF_H_INCLUDED

const int Len = 40;

namespace golf_ns
{
const int ArSize = 5;
using std::cout;
using std::endl;
using std::cin;
using std::string;
struct golf
{
	string fullname;
	int handicap;
};
}

using namespace golf_ns;

extern golf jim;
extern golf ann;
extern golf tom;

void setgolf(golf & g, string & name, int hc);

void setgolf(golf & g);

void handicap(golf & g, int hc);

void showgolf(const golf & g);

#endif ZAD_9_1_GOLF_H_INCLUDED
