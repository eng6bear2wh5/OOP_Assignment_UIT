#include "CDaThucTinh.h"

istream& operator>>(istream& is, CDaThucTinh& a)
{
	cout << "Moi nhap bac: ";
	is >> a.n;
	for (int i = a.n; i >= 0; i--)
	{
		cout << "A[" << i << "]" << "=";
		is >> a.A[i];
	}
	return is;
}
ostream& operator<<(ostream& os, CDaThucTinh a)
{
	for (int i = a.n; i > 0; i--)
	{

		os << a.A[i];
		os << "x^";
		os << i;
		os << " + ";
	}
	os << a.A[0] << endl;
	return os;
}