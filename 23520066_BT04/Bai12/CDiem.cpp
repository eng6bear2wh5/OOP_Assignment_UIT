#include "CDiem.h"

CDiem::CDiem()
{
	x = 1;
	y = 2;
	z = 3;
	cout << "Phuong thuc thiet lap mac dinh";
}

CDiem::CDiem(float Xx, float Yy, float Zz)
{
	x = Xx;
	y = Yy;
	z = Zz;
	cout << "Phuong thuc thiet lap nhan tham so dau vao";
}

CDiem::CDiem(const CDiem& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
	cout << "Phuong thuc thiet lap sao chep";
}

CDiem::~CDiem()
{
	cout << "Phuong thuc pha huy";
}