#include "CDuongThang.h"
#include <iostream>
using namespace std;

CDuongThang::CDuongThang()
{
	a = 2;
	b = 3;
	cout << "Phuong thuc thiet lap mac dinh";
}

CDuongThang::CDuongThang(float Aa, float Bb)
{
	a = Aa;
	b = Bb;
	cout << "Phuong thuc thiet lap nhan tham so dau vao";
}

CDuongThang::CDuongThang(const CDuongThang& x)
{
	a = x.a;
	b = x.b;
	cout << "Phuong thuc thiet lap sao chep";
}

CDuongThang::~CDuongThang()
{
	cout << "Phuong thuc pha huy";
}