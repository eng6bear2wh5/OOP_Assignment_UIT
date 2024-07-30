#include "CDiem.h"

istream& operator>>(istream& is, CDiem& a)
{
	cout << "\nx: ";
	is >> a.x;
	cout << "y: ";
	is >> a.y;
	return is;
}

ostream& operator<<(ostream& os, CDiem a)
{
	os << "\nx = " << a.x;
	os << "\ny = " << a.y;
	return os;
}