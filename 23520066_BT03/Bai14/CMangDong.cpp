#include "CMangDong.h"

istream& operator>>(istream& is, CMangDong& a)
{
	cout << "Nhap n: ";
	is >> a.n;
	a.A = new float[a.n];
	for (int i = 0; i < a.n; ++i)
	{
		cout << "Moi nhap a[" << i << "]" << ":";
		is >> a.A[i];
	}
	return is;
}
ostream& operator<<(ostream& os, CMangDong a)
{
	cout << "Mang 1 chieu la: " << endl;
	for (int i = 0; i < a.n; ++i)
	{
		os << "a[" << i << "] = " << a.A[i] << endl;
	}
	return os;
}