#pragma once
#include <iostream>
using namespace std;
#include "CChiTiet.h"

class CChiTietDon: public CChiTiet
{
protected:
	int GiaTien;
public:
	void Nhap();
	void Xuat();
	int TinhTien();
	CChiTiet* TimKiem(long);
	int DemChiTietDon();
};

