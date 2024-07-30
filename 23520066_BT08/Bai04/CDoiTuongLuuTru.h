#pragma once
#include <iostream>
using namespace std;
#include "CNgay.h"

class CDoiTuongLuuTru
{
protected:
	string Ten;
	CNgay NgayThangTao;
	float DungLuong;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TongDungLuong();
	virtual int DemTapTin();
	virtual int DemThuMucCon();
};

