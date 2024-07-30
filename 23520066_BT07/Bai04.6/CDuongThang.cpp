#include "CDuongThang.h"

istream& operator >> (istream& is, CDuongThang& x)
{
	cout << "Moi nhap a: ";
	is >> x.a;
	cout << "Moi nhap b: ";
	is >> x.b;
	return is;
}

ostream& operator << (ostream& os, CDuongThang x)
{
	os << "y = " << x.a << "x" << " + " << "b" << endl;
	return os;
}

int CDuongThang::operator == (const CDuongThang& x)
{
	if (a == x.a && b == x.b)
		return 1;
	return 0;
}

int CDuongThang::operator != (const CDuongThang& x)
{
	if (a != x.a || b != x.b)
		return 1;
	return 0;
}