#include "CDaThuc.h"

istream& operator>>(istream& is, CDaThuc& F)
{
	cout << "\nMoi nhap so mu: ";
	is >> F.n;
	for (int i = F.n; i >= 0; i--)
	{
		cout << "Moi nhap a[" << i << "]: ";
		is >> F.a[i];
	}
	return is;
}

ostream& operator<<(ostream& os, CDaThuc F)
{
	for (int i = F.n; i > 0; i--)
	{
		os << F.a[i];
		os << "x^";
		os << i;
		if (F.a[i - 1] >= 0)
			os << " + ";
	}
	os << F.a[0];
	return os;
}

void CDaThuc::RutGon()
{
	while (a[n] == 0)
		n--;
}

int CDaThuc::LonNhat(int a, int b)
{
	if (a >= b)
		return a;
	return b;
}

CDaThuc CDaThuc::operator+(CDaThuc& F)
{
	CDaThuc temp;
	temp.n = LonNhat(n, F.n);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= n; i++)
		temp.a[i] += a[i];
	for (int i = 0; i <= F.n; ++i)
		temp.a[i] += F.a[i];
	temp.RutGon();
	return temp;
}

CDaThuc CDaThuc::operator-(CDaThuc& F)
{
	CDaThuc temp;
	temp.n = LonNhat(n, F.n);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= n; i++)
		temp.a[i] += a[i];
	for (int i = 0; i <= F.n; ++i)
		temp.a[i] -= F.a[i];
	temp.RutGon();
	return temp;
}

CDaThuc CDaThuc::operator*(CDaThuc& F)
{
	CDaThuc temp;
	temp.n = n + F.n;
	for (int i = 0; i <= temp.n; ++i)
		temp.a[i] = 0;
	for (int i = 0; i <= F.n; i++)
		for (int j = 0; i <= n; j++)
			temp.a[i + j] += F.a[i] * a[j];
	temp.RutGon();
	return temp;
}

CDaThuc CDaThuc::operator/(CDaThuc& F)
{
	CDaThuc temp;
	temp.n = LonNhat(n - F.n, 0);
	for (int i = 0; i < F.n; i++)
		temp.a[i] = 0;
	CDaThuc BC = *this;
	CDaThuc C = F;
	while (BC.n > C.n)
	{
		CDaThuc TG;
		TG.n = BC.n - C.n;
		for (int i = 0; i < TG.n; i++)
			TG.a[i] = 0;
		TG.a[TG.n] = BC.a[BC.n] / C.a[C.n];
		temp += TG;
		CDaThuc Tru = TG * C;
		BC = BC - Tru;
	}
	return temp;
}

CDaThuc CDaThuc::operator+=(CDaThuc& F)
{
	CDaThuc temp;
	temp.n = LonNhat(n, F.n);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= n; i++)
		temp.a[i] += a[i];
	for (int i = 0; i <= F.n; ++i)
		temp.a[i] += F.a[i];
	temp.RutGon();
	*this = temp;
	return *this;
}

CDaThuc CDaThuc::operator-=(CDaThuc& F)
{
	CDaThuc temp;
	temp.n = LonNhat(n, F.n);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= n; i++)
		temp.a[i] += a[i];
	for (int i = 0; i <= F.n; ++i)
		temp.a[i] -= F.a[i];
	temp.RutGon();
	*this = temp;
	return *this;
}

CDaThuc CDaThuc::operator*=(CDaThuc& F)
{
	CDaThuc temp;
	temp.n = n + F.n;
	for (int i = 0; i <= temp.n; ++i)
		temp.a[i] = 0;
	for (int i = 0; i <= F.n; i++)
		for (int j = 0; i <= n; j++)
			temp.a[i + j] += F.a[i] * a[j];
	temp.RutGon();
	*this = temp;
	return *this;
}

CDaThuc CDaThuc::operator/=(CDaThuc& F)
{
	CDaThuc temp;
	temp.n = LonNhat(n - F.n, 0);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	CDaThuc BC = *this;
	CDaThuc C = F;
	while (BC.n > C.n)
	{
		CDaThuc TG;
		TG.n = BC.n - C.n;
		for (int i = 0; i < TG.n; i++)
			TG.a[i] = 0;
		TG.a[TG.n] = BC.a[BC.n] / C.a[C.n];
		temp += TG;
		CDaThuc Tru = TG * C;
		BC = BC - Tru;
	}
	*this = temp;
	return *this;
}