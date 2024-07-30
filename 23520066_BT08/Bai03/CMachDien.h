#pragma once
#include <iostream>
using namespace std;

class CMachDien
{
protected:
	int n;
	CMachDien* ds[100];
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhDienTro();
};

