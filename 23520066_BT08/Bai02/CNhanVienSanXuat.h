#pragma once
#include <iostream>
using namespace std;
#include "CNhanVien.h"

class CNhanVienSanXuat: public CNhanVien
{
protected:
	int SoSanPham;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien* TimKiem(string);
};

