#pragma once
#include <iostream>
using namespace std;
#include "CDoiTuongLuuTru.h"

class CODia
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

