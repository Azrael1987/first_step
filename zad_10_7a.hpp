// zad_10_7a.hpp - (203) - zadanie 7 z rodzialu 10 - 

#ifndef ZAD_10_7A_HPP
#define ZAD_10_7A_HPP

class Plorg
{
private:
	int satiety;
	enum {MAX = 20};
	char name[MAX];

public:
	Plorg(const char * fn = "Plorga", int sat = 50);
	void update(int sat);
	void show();
	~Plorg();
};

#endif
