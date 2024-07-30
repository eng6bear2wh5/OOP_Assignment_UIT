#include "CHonSo.h"
#include <iostream>
using namespace std;

CHonSo::CHonSo()
{
	nguyen = 2;
	tu = 3;
	mau = 1;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}

CHonSo::CHonSo(int Nnguyen, int Ttu, int Mmau)
{
	nguyen = Nnguyen;
	tu = Ttu;
	mau = Mmau;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}

CHonSo::CHonSo(const CHonSo& a)
{
	nguyen = a.nguyen;
	tu = a.tu;
	mau = a.mau;
	cout << "Phuong thuc thiet lap sao chep thong tin" << endl;
}

CHonSo::~CHonSo()
{
	cout << "Phuong thuc pha huy" << endl;
}