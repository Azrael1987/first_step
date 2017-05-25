// zad_10_6a.hpp - (202) - zadanie 6 z rodzialu 10 - deklaracja klasy

#ifndef ZAD_10_6A_HPP
#define ZAD_10_6A_HPP

class Move
{

private:
	double x;
	double y;
public:
	Move(double a = 0.0, double = 0.0);
	void showmove() const;
	
	Move add(const Move & m) const;
	void reset(double a = 0, double b = 0);

};


#endif
