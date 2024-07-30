#pragma once
#include <iostream>
#include <string>
#include "CNgay.h"
using namespace std;

class CNhanVien
{
protected:
	string HoTen;
	CNgay NgaySinh;
	float LuongCoBan;
	float Luong;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhLuong();
	virtual CNhanVien* TimKiem(string);
};

