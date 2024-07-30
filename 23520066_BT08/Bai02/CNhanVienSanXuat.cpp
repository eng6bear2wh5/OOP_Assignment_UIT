#include "CNhanVienSanXuat.h"

void CNhanVienSanXuat::Nhap()
{
	CNhanVien::Nhap();
	cout << "Moi nhap so san pham: ";
	cin >> SoSanPham;
	cin.ignore();
}

void CNhanVienSanXuat::Xuat()
{
	CNhanVien::Xuat();
	cout << "So san pham la: " << SoSanPham;
}

float CNhanVienSanXuat::TinhLuong()
{
	return (LuongCoBan + SoSanPham * 2000);
}

CNhanVien* CNhanVienSanXuat::TimKiem(string hoten)
{
	if (HoTen.compare(hoten) == 0)
		return this;
	return NULL;
}