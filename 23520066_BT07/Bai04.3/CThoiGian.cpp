#include "CThoiGian.h"

istream& operator >> (istream& is, CThoiGian& a)
{
	cout << "Moi nhap gio: ";
	is >> a.gio;
	cout << "Moi nhap phut: ";
	is >> a.phut;
	cout << "Moi nhap giay: ";
	is >> a.giay;
	return is;
}

ostream& operator << (ostream& os, CThoiGian a)
{
	os << a.gio << ":" << a.phut << ":" << a.giay << endl;
	return os;
}

int CThoiGian::operator == (const CThoiGian& a)
{
	if (gio == a.gio && phut == a.phut && giay == a.giay)
		return 1;
	return 0;
}

int CThoiGian::operator != (const CThoiGian& a)
{
	if (gio != a.gio || phut == a.phut || giay == a.giay)
		return 1;
	return 0;
}