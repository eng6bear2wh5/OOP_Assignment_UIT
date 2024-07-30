#include "CDiem.h"

istream& operator >> (istream& is, CDiem& a)
{
	cout << "Moi nhap toa do x: ";
	is >> a.x;
	cout << "Moi nhap toa do y: ";
	is >> a.y;
	return is;
}

ostream& operator << (ostream& os, CDiem a)
{
	os << "(" << a.x << ", " << a.y << ")" << endl;
	return os;
}

int CDiem::operator == (const CDiem& a)
{
	if (x == a.x && y == a.y)
		return 1;
	return 0;
}

int CDiem::operator != (const CDiem& a)
{
	if (x != a.x || y != a.y)
		return 1;
	return 0;
}