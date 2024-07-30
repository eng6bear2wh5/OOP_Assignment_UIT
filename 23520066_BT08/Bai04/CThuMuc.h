#pragma once
#include <iostream>
using namespace std;
#include "CDoiTuongLuuTru.h"
#include <string>

class CThuMuc: public CDoiTuongLuuTru
{
protected:
	int n;
	CDoiTuongLuuTru* ds[100];
public:
	void Nhap();
	void Xuat();
	float TongDungLuong();
	int DemTapTin();
	int DemThuMucCon();
};

