#include "CTamGiac.h"

CTamGiac::CTamGiac()
{
	a = CDiem();
	b = CDiem();
	c = CDiem();
	cout << "Phuong thuc thiet lap mac dinh\n";
}

CTamGiac::CTamGiac(float Xx, float Yy, float XxX, float YyY, float xx, float yy)
{
	a = CDiem(Xx, Yy);
	b = CDiem(XxX, YyY);
	c = CDiem(Xx, Yy);
	cout << "Phuong thuc thiet lap nhan tham so dau vao\n";

}

CTamGiac::CTamGiac(const CTamGiac& ABC)
{
	a = ABC.a;
	b = ABC.b;
	c = ABC.c;
	cout << "Phuong thuc thiet lap sao chep\n";
}

CTamGiac::~CTamGiac()
{
	cout << "Phuong thuc pha huy\n";
}