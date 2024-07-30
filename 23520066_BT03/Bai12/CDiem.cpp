#include "CDiem.h"

istream& operator>>(istream& is, CDiem& a)
{
	cout << "\nx = ";
	is >> a.x;
	cout << "y = ";
	is >> a.y;
	cout << "z = ";
	is >> a.z;
	return is;
}

ostream& operator<<(ostream& os, CDiem a)
{
	os << "\ntam hinh cau co toa do la: " << "(" << a.x << ", " << a.y << ", " << a.z << ")";
	return os;
}