#include "CDonThuc.h"
#include <iostream>
using namespace std;

CDonThuc::CDonThuc()
{
	HeSo = 3;
	SoMu = 4;
	cout << "Phuong thuc thiet lap mac dinh.";
}

CDonThuc::CDonThuc(float Hheso, float Ssomu)
{
	HeSo = Hheso;
	SoMu = Ssomu;
	cout << "Phuong thuc thiet lap nhan tham so dau vao";
}

CDonThuc::CDonThuc(const CDonThuc& x)
{
	HeSo = x.HeSo;
	SoMu = x.SoMu;
	cout << "Phuong thuc thiet lap sao chep";
}

CDonThuc::~CDonThuc()
{
	cout << "Phuong thuc thiet lap pha huy";
}