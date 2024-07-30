#include "CThoiGian.h"

istream& operator>>(istream& is, CThoiGian& x)
{
	cout << "Moi nhap gio: ";
	is >> x.gio;
	cout << "Moi nhap phut: ";
	is >> x.phut;
	cout << "Moi nhap giay: ";
	is >> x.giay;
	return is;
}
ostream& operator<<(ostream& os, CThoiGian x)
{
	cout << "Thoi gian la: ";
	os << x.gio << ":" << x.phut << ":" << x.giay;
	return os;
}