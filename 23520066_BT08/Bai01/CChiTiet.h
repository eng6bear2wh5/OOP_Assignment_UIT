#pragma once
#include <iostream>
using namespace std;

class CChiTiet
{
protected:
	long MaSo;
	int n;
	CChiTiet* ds[100];
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual CChiTiet* TimKiem(long);
	virtual int DemChiTietDon();
	virtual int TinhTien();
};

