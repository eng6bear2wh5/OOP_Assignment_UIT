#include "CDonThuc.h"

istream& operator>>(istream& is, CDonThuc& x)
{
	cout << "Moi nhap he so: ";
	is >> x.HeSo;
	cout << "Moi nhap so mu: ";
	is >> x.SoMu;
	return is;
}

ostream& operator<<(ostream& os, CDonThuc x)
{
	os << "y = " << x.HeSo << "x" << "^" << x.SoMu;
	return os;
}