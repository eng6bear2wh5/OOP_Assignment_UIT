#include "CMaTranDong.h"

istream& operator>>(istream& is, CMaTranDong& a)
{
	cout << "Moi nhap dong: ";
	is >> a.n;
	cout << "Moi nhap cot: ";
	is >> a.m;
	for (int i = 0; i < a.n; ++i)
	{
		a.A = new float*[a.n];
		for (int j = 0; j < a.m; ++j)
		{
			a.A[i] = new float [a.m];
			cout << "A[" << i << "]" << "[" << j << "]" << "=";
			is >> a.A[i][j];
		}
	}
	return is;
}
ostream& operator<<(ostream& os, CMaTranDong a)
{
	cout << "Cac phan tu cua mang la: " << endl;
	for (int i = 0; i < a.n; ++i)
	{
		for (int j = 0; j < a.m; ++j)
		{
			os << "A[" << i << "]" << "[" << j << "]" << "= " << a.A[i][j];
		}
	}
	return os;
}