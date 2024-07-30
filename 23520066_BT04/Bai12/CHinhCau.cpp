#include "CHinhCau.h"

CHinhCau::CHinhCau()
{
	O = CDiem();
	R = 1;
	cout << "Phuong thuc thiet lap mac dinh";
}

CHinhCau::CHinhCau(float Xx, float Yy, float Zz, float Rr)
{
	O = CDiem(Xx, Yy, Zz);
	R = Rr;
	cout << "Phuong thuc thiet lap nhan tham so dau vao";
}

CHinhCau::CHinhCau(const CHinhCau& a)
{
	O = a.O;
	R = a.R;
	cout << "Phuong thuc thiet lap sao chep";
}

CHinhCau:: ~CHinhCau()
{
	cout << "Phuong thuc pha huy";
}