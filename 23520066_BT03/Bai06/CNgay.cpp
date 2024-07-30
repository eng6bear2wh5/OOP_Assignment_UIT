#include "CNgay.h"

istream& operator>>(istream& is, CNgay& x)
{
	cout << "Nhap ngay: ";
	is >> x.ngay;
	cout << "Nhap thang: ";
	is >> x.thang;
	cout << "Nhap nam: ";
	is >> x.nam;
	return is;
}
ostream& operator<<(ostream& os, CNgay x)
{
	os << x.ngay << "/" << x.thang << "/" << x.nam;
	return os;
}