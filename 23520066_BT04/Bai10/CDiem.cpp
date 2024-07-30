#include "CDiem.h"
#include <iostream>
using namespace std;

CDiem::CDiem()
{
	x = 1;
	y = 2;
	cout << "Phuong thuc thiet lap mac dinh";
}

CDiem::CDiem(float Xx, float Yy)
{
	x = Xx;
	x = Yy;
	cout << "Phuong thuc thiet lap nhan tham so dau vao";
}

CDiem::CDiem(const CDiem& a)
{
	x = a.x;
	x = a.y;
	cout << "Phuong thuc thiet lap sao chep";
}

CDiem::~CDiem()
{
	
	cout << "Phuong thuc pha huy";
}

