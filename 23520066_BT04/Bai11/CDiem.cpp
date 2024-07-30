#include "CDiem.h"

CDiem::CDiem()
{
	x = 2;
	y = 3;
	cout << "Phuong thuc thiet lap mac dinh\n";
}

CDiem::CDiem(float Xx, float Yy)
{
	x = Xx;
	y = Yy;
	cout << "Phuong thuc thiet lap nhan tham so dau vao\n";
}

CDiem::CDiem(const CDiem& a)
{
	x = a.x;
	y = a.y;
	cout << "Phuong thuc thiet lap sao chep\n";
}

CDiem::~CDiem()
{
	cout << "Phuong thuc pha huy\n";
}