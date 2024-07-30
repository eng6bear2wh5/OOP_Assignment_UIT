#include "CDaThucDong.h"

istream& operator>>(istream& is, CDaThucDong& a)
{
	cout << "Moi nhap bac: ";
	is >> a.n;
	a.A = new float [a.n];
	for (int i = a.n; i >= 0; i--)
	{
		cout << "Moi nhap a[" << i << "]" << ":";
		is >> a.A[i];
	}
	return is;
}
ostream& operator<<(ostream& os, CDaThucDong a)
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