#include "CNgay.h"

istream& operator>>(istream& is, CNgay& a)
{
	cout << "Moi nhap ngay: ";
	is >> a.ngay;
	cin.ignore();
	cout << "Moi nhap thang: ";
	is >> a.thang;
	cin.ignore();
	cout << "Moi nhap nam: ";
	is >> a.nam;
	cin.ignore();
	return is;
}

ostream& operator<<(ostream& os, CNgay a)
{
	os << a.ngay << "/" << a.thang << "/" << a.nam;
	return os;
}