#include "CHinhCau.h"

istream& operator>>(istream& is, CHinhCau& a)
{
	cout << "Moi nhap ban kinh hinh cau: ";
	is >> a.R;
	cout << "Moi nhap toa do tam hinh cau: ";
	is >> a.O;
	return is;
}

ostream& operator<<(ostream& os, CHinhCau a)
{
	os << "ban kinh hinh cau la: " << a.R;
	os << a.O;
	return os;
}