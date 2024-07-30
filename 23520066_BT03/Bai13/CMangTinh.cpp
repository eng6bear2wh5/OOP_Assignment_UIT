#include "CMangTinh.h"

istream& operator>>(istream& is, CMangTinh& a)
{
	cout << "Nhap n: ";
	is >> a.n;
	for (int i = 0; i < a.n; ++i)
	{
		cout << "Moi nhap a[" << i << "]" << ":";
		is >> a.A[i];
	}
	return is;
}
ostream& operator<<(ostream& os, CMangTinh a)
{
	cout << "Mang 1 chieu la: ";
	for (int i = 0; i < a.n; ++i)
	{
		os << "A[i] = " << a.A[i] << " ";
	}
	return os;
}