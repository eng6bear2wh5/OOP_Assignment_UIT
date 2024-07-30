#include "CDonThuc.h"

istream& operator >> (istream& is, CDonThuc& a)
{
	cout << "Moi nhap he so cua don thuc: ";
	is >> a.HeSo;
	cout << "Moi nhap so mu cua don thuc: ";
	is >> a.SoMu;
	return is;
}

ostream& operator << (ostream& os, CDonThuc a)
{
	os << a.HeSo << "x" << "^" << a.SoMu << endl;
	return os;
}

int CDonThuc::operator == (const CDonThuc& a)
{
	if (HeSo == a.HeSo && SoMu == a.SoMu)
		return 1;
	return 0;
}

int CDonThuc::operator != (const CDonThuc& a)
{
	if (HeSo != a.HeSo || SoMu != a.SoMu)
		return 1;
	return 0;
}