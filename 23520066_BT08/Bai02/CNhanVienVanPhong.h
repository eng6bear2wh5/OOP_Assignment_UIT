#pragma once
#include <iostream>
using namespace std;
#include "CNhanVien.h"

class CNhanVienVanPhong: public CNhanVien
{
protected:
	int SoNgayLamViec;
	float TroCap;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien* TimKiem(string);
};

