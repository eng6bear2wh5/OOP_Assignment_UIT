#include "CPhanSo.h"

istream& operator >> (istream& is, CPhanSo& a)
{
	cout << "Moi nhap tu so: ";
	is >> a.tu;
	cout << "Moi nhap mau so: ";
	is >> a.mau;
	return is;
}

ostream& operator << (ostream& os, CPhanSo a)
{
	os << a.tu << "/" << a.mau << endl;
	return os;
}

CPhanSo CPhanSo::operator - (const CPhanSo& a)
{
	CPhanSo temp;
	temp.tu = tu * a.mau - mau * a.tu;
	temp.mau = mau * a.mau;
	return temp;
}

int CPhanSo::operator == (const CPhanSo& a)
{
	CPhanSo temp = *this - a;
	if (temp.tu * temp.mau == 0)
		return 1;
	return 0;
}
int CPhanSo::operator != (const CPhanSo& a)
{
	CPhanSo temp = *this - a;
	if (temp.tu * temp.mau != 0)
		return 1;
	return 0;
}

int CPhanSo::operator > (const CPhanSo& a)
{
	CPhanSo temp = *this - a;
	if (temp.tu * temp.mau > 0)
		return 1;
	return 0;
}

int CPhanSo::operator >= (const CPhanSo& a)
{
	CPhanSo temp = *this - a;
	if (temp.tu * temp.mau >= 0)
		return 1;
	return 0;
}

int CPhanSo::operator < (const CPhanSo& a)
{
	CPhanSo temp = *this - a;
	if (temp.tu * temp.mau < 0)
		return 1;
	return 0;
}

int CPhanSo::operator <= (const CPhanSo& a)
{
	CPhanSo temp = *this - a;
	if (temp.tu * temp.mau <= 0)
		return 1;
	return 0;
}