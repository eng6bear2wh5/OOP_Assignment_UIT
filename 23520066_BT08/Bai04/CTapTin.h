#pragma once
#include <iostream>
using namespace std;
#include "CDoiTuongLuuTru.h"

class CTapTin: public CDoiTuongLuuTru
{
public:
	void Nhap();
	void Xuat();
	float TongDungLuong();
	int DemTapTin();
	int DemThuMucCon();
};

