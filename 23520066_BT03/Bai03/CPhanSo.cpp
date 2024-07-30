#include "CPhanSo.h"

istream& operator>>(istream& is, CPhanSo& a)
{
	cout << "Moi nhap tu: ";
	is >> a.tu;
	cout << "Moi nhap mau: ";
	is >> a.mau;
	return is;
}
ostream& operator<<(ostream& os, CPhanSo a)
{
	os << a.tu << "/" << a.mau;
	return os;
}