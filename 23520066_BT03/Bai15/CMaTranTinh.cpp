#include "CMaTranTinh.h"

istream& operator>>(istream& is, CMaTranTinh& a)
{
	cout << "Moi nhap dong: ";
	is >> a.n;
	cout << "Moi nhap cot: ";
	is >> a.m;
	for (int i = 0; i < a.n; ++i)
	{
		for (int j = 0; j < a.m; ++j)
		{
			cout << "a[" << i << "]" << "[" << j << "]" << "= ";
			is >> a.A[i][j];
		}
	}
	return is;
}
ostream& operator<<(ostream& os, CMaTranTinh a)
{
	cout << "Cac phan tu cua mang la: " << endl;
	for (int i = 0; i < a.n; ++i)
	{
		for (int j = 0; j < a.m; ++j)
		{
			os << "a[" << i << "]" <<"[" << j << "]" << "=";
			os << a.A[i][j] << endl;
		}
	}
	return os;
}
