#include "CDuongTron.h"
#include "CDiem.h"

CDuongTron::CDuongTron()
{
	O = CDiem();
	R = 1;
	cout << "Phuong thuc thiet lap mac dinh";
}
CDuongTron::CDuongTron(float Xx, float Yy, float Rr)
{
	O = CDiem(Xx, Yy);
	R = Rr;
	cout << "Phuong thuc thiet lap nhan tham so dau vao";
}
CDuongTron::CDuongTron(const CDuongTron& a)
{
	O = CDiem(a.O);
	R = a.R;
	cout << "Phuong thuc thiet lap sao chep";
}
CDuongTron::~CDuongTron()
{
	cout << "Phuong thuc thiet lap pha huy";
}
