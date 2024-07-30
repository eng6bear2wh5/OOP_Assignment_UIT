#pragma once
#include <iostream>
using namespace std;
#include "CChiTiet.h"

class CMay
{
	protected:
		int n;
		CChiTiet* ds[100];
public:
	void Nhap();
	void Xuat();
	CChiTiet* TimKiem(long);
	int DemChiTietDon();
	int TriGia();
};

