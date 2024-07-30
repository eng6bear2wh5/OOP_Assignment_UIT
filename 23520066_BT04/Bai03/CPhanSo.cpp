#include "CPhanSo.h"
#include <iostream>
using namespace std;

CPhanSo::CPhanSo()
{
	tu = 0;
	mau = 1;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}

CPhanSo::CPhanSo(int Tu, int Mau)
{
	tu = Tu;
	mau = Mau;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}

CPhanSo::CPhanSo(const CPhanSo& a)
{
	tu = a.tu;
	mau = a.mau;
	cout << "Phuong thuc thiet lap sao chep" << endl;
}

CPhanSo::~CPhanSo()
{
	cout << "Phuong thuc pha huy";
}
