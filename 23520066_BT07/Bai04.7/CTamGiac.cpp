#include "CTamGiac.h"

istream& operator >> (istream& is, CTamGiac& a)
{
	cout << "Moi nhap toa do diem A: " << endl;
	is >> a.A;
	cout << "Moi nhap toa do diem B: " << endl;
	is >> a.B;
	cout << "Moi nhap toa do diem C: " << endl;
	is >> a.C;
	return is;
}

ostream& operator << (ostream& os, CTamGiac a)
{
	cout << "Toa do diem A la: " ;
	os << a.A;
	cout << "Toa do diem B la: " ;
	os << a.B;
	cout << "Toa do diem C la: " ;
	os << a.C;
	return os;
}

int CTamGiac::operator == (const CTamGiac& a)
{
	if (A == a.A && B == a.B && C == a.C)
		return 1;
	return 0;
}

int CTamGiac::operator != (const CTamGiac& a)
{
	if (A != a.A || B != a.B || C != a.C)
		return 1;
	return 0;
}