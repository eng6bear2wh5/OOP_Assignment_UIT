#include "CDonThuc.h"

istream& operator>>(istream& is, CDonThuc& a)
{
	cout << "Moi nhap he so: ";
	is >> a.HeSo;
	cout << "Moi nhap so mu: ";
	is >> a.SoMu;
	return is;
}

ostream& operator<<(ostream& os, CDonThuc& a)
{
	os << a.HeSo << "x" << "^" << a.SoMu;
	return os;
}


CDonThuc CDonThuc::operator*(CDonThuc a)
{
	CDonThuc temp;
	temp.HeSo = HeSo * a.HeSo;
	temp.SoMu = SoMu + a.SoMu;
	return temp;
}

CDonThuc CDonThuc::operator/(CDonThuc a)
{
	CDonThuc temp;
	temp.HeSo = HeSo / a.HeSo;
	temp.SoMu = SoMu - a.SoMu;
	return temp;
}

CDonThuc CDonThuc::operator*=(CDonThuc a)
{
	CDonThuc temp;
	temp.HeSo = HeSo * a.HeSo;
	temp.SoMu = SoMu + a.SoMu;
	*this = temp;
	return *this;
}

CDonThuc CDonThuc::operator/=(CDonThuc a)
{
	CDonThuc temp;
	temp.HeSo = HeSo / a.HeSo;
	temp.SoMu = SoMu - a.SoMu;
	*this = temp;
	return *this;
}
