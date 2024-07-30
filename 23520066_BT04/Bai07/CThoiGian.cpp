#include "CThoiGian.h"
#include <iostream>
using namespace std;

CThoiGian::CThoiGian()
{
	gio = 20;
	phut = 20;
	giay = 10;
	cout << "Phuong thuc thiet lap mac dinh";
}

CThoiGian::CThoiGian(int Ggio, int Pphut, int Ggiay)
{
	gio = Ggio;
	phut = Pphut;
	giay = Ggiay;
	cout << "Phuong thuc thiet lap nhan tham so dau vao";
}

CThoiGian::CThoiGian(const CThoiGian& a)
{
	gio = a.gio;
	phut = a.phut;
	giay = a.giay;
	cout << "Phuong thuc thiet lap sao chep ";
}

CThoiGian::~CThoiGian()
{
	cout << "Phuong thuc pha huy";
}