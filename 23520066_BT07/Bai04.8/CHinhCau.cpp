#include "CHinhCau.h"

istream& operator >> (istream& is, CHinhCau& a)
{
	cout << "Moi nhap toa do tam hinh cau: ";
	is >> a.O;
	cout << "Moi nhap ban kinh hinh cau: ";
	is >> a.R;
	return is;
}

ostream& operator << (ostream& os, CHinhCau a)
{
	cout << "Toa do tam hinh cau la: ";
	os << a.O;
	cout << "Ban kinh hinh cau la: ";
	os << a.R;
	return os;
}

int CHinhCau::operator == (const CHinhCau& a)
{
	if (O == a.O && R == a.R)
		return 1;
	return 0;
}

int CHinhCau::operator != (const CHinhCau& a)
{
	if (O != a.O || R != a.R)
		return 1;
	return 0;
}