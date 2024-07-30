#include "CDiem.h"

istream& operator>>(istream& is, CDiem& A)
{
	cout << "Nhap x: ";
	is >> A.x;
	cout << "Nhap y: ";
	is >> A.y;
	return is;
}

ostream& operator<<(ostream& os, CDiem A) 
{
	cout << "Toa do la: ";
	os << "(" << A.x << ", " << A.y << ")";
	return os;
}