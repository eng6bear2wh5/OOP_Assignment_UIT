#include "CPhanSo.h"

istream& operator>>(istream& is, CPhanSo& a)
{
	cout << "Moi nhap tu so: ";
	is >> a.tu;
	cout << "Moi nhap mau so: ";
	is >> a.mau;
	return is;
}

ostream& operator<<(ostream& os, CPhanSo& a)
{
	os << a.tu << "/" << a.mau;
	return os;
}

CPhanSo CPhanSo::operator+(CPhanSo b)
{
	CPhanSo temp;
	temp.tu = tu * b.mau + mau * b.tu;
	temp.mau = mau * b.mau;
	return temp;
}

CPhanSo CPhanSo::operator-(CPhanSo b)
{
	CPhanSo temp;
	temp.tu = tu * b.mau - mau * b.tu;
	temp.mau = mau * b.mau;
	return temp;
}

CPhanSo CPhanSo::operator*(CPhanSo b)
{
	CPhanSo temp;
	temp.tu = tu * b.tu;
	temp.mau = mau * b.mau;
	return temp;
}

CPhanSo CPhanSo::operator/(CPhanSo b)
{
	CPhanSo temp;
	temp.tu = tu * b.mau;
	temp.mau = mau * b.tu;	
	return temp;
}

CPhanSo CPhanSo::operator+=(CPhanSo b)
{
	CPhanSo temp;
	temp.tu = tu * b.mau + mau * b.tu;
	temp.mau = mau * b.mau;
	*this = temp;
	return *this;
}

CPhanSo CPhanSo::operator-=(CPhanSo b)
{
	CPhanSo temp;
	temp.tu = tu * b.mau - mau * b.tu;
	temp.mau = mau * b.mau;
	*this = temp;
	return *this;
}

CPhanSo CPhanSo::operator*=(CPhanSo b)
{
	CPhanSo temp;
	temp.tu = tu * b.tu;
	temp.mau = mau * b.mau;
	*this = temp;
	return *this;
}

CPhanSo CPhanSo::operator/=(CPhanSo b)
{
	CPhanSo temp;
	temp.tu = tu * b.mau;
	temp.mau = mau * b.tu;
	*this = temp;
	return *this;
}

CPhanSo& CPhanSo::operator++()
{
	tu += mau;
	return *this;
}
CPhanSo& CPhanSo::operator--()
{
	tu -= mau;
	return *this;
}

CPhanSo& CPhanSo::operator++(int)
{
	CPhanSo temp;
	temp = *this;
	++*this;
	return temp;
}

CPhanSo& CPhanSo::operator--(int)
{
	CPhanSo temp;
	temp = *this;
	--*this;
	return temp;
}