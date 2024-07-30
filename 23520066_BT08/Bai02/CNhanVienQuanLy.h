#pragma once
#include "CNhanVien.h"
#include <iostream>
using namespace std;

class CNhanVienQuanLy: public CNhanVien
{
	protected:
		float HeSoChucVu;
		float Thuong;
	public:
		void Nhap();
		void Xuat();
		float TinhLuong();
		CNhanVien* TimKiem(string);
};

