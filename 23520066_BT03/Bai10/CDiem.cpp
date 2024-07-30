#include "CDiem.h"

istream& operator>>(istream& is, CDiem& a)
{
		cout << "\nNhap x: " << endl;
		is >> a.x;
		cout << "Nhap y: " << endl;
		is >> a.y;
		return is;
}

ostream& operator<<(ostream& os, CDiem a)
{
		os << "(" << a.x << ", " << a.y << ")" << endl;
		return os;
}