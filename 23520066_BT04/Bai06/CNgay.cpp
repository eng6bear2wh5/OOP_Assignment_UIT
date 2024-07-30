#include "CNgay.h"
#include <iostream>
using namespace std;

CNgay::CNgay()
{
	ngay = 1;
	thang = 12;
	nam = 2024;
	cout << "Phuong thuc thiet lap mac dinh";
}

CNgay::CNgay(int Nngay, int Tthang, int Nnam)
{
	ngay = Nngay;
	thang = Tthang;
	nam = Nnam;
	cout << "Phuong thuc thiet lap khi biet day du thong tin";
}

CNgay::CNgay(const CNgay& a)
{
	ngay = a.ngay;
	thang = a.thang;
	nam = a.nam;
	cout << "Phuong thuc thiet lap sao chep thong tin";
}

CNgay::~CNgay()
{
	cout << "Phuong thuc pha huy";
}
