#include "CNgay.h"

istream& operator >> (istream& is, CNgay& a)
{
	cout << "Moi nhap ngay: ";
	is >> a.ngay;
	cout << "Moi nhap thang: ";
	is >> a.thang;
	cout << "Moi nhap nam: ";
	is >> a.nam;
	return is;
}

ostream& operator << (ostream& os, CNgay a)
{
	os << a.ngay << "/" << a.thang << "/" << a.nam << endl;
	return os;
}

int CNgay::operator == (const CNgay& a)
{
	if (ngay == a.ngay && thang == a.thang && nam == a.nam)
		return 1;
	return 0;
}

int CNgay::operator != (const CNgay& a)
{
	if (ngay != a.ngay || thang == a.thang || nam == a.nam)
		return 1;
	return 0;
}