#include "CTamGiac.h"
#include "CDiem.h"

CTamGiac& CTamGiac::operator=(const CTamGiac& z)
{
	a = z.a;
	b = z.b;
	c = z.c;
	return *this;
}

CTamGiac::CTamGiac()
{
	a = CDiem();
	b = CDiem();
	c = CDiem();
}

CTamGiac::CTamGiac(float Xx, float Yy, float XXx, float YYy, float XXX, float YYY)
{
	a = CDiem(Xx, Yy);
	b = CDiem(XXx, YYy);
	c = CDiem(XXX, YYY);
}

CTamGiac::CTamGiac(const CTamGiac& x)
{
	a = CDiem(x.a);
	b = CDiem(x.b);
	c = CDiem(x.c);
}

void CTamGiac::TGshow()
{
	cout << "Tam giac co 3 diem: ";
	cout << "\nDiem A: ";
	a.Dshow();
	cout << "\nDiem B: ";
	b.Dshow();
	cout << "\nDiem C: ";
	c.Dshow();
}