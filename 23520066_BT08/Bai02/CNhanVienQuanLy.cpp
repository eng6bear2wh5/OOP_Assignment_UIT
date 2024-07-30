#include "CNhanVienQuanLy.h"

void CNhanVienQuanLy::Nhap()
{
	CNhanVien::Nhap();
	cout << "Moi nhap he so chuc vu: ";
	cin >> HeSoChucVu;
	cin.ignore();
	cout << "Moi nhap thuong: ";
	cin >> Thuong;
	cin.ignore();
}
void CNhanVienQuanLy::Xuat()
{
	CNhanVien::Xuat();
	cout << "He so chuc vu la: " << HeSoChucVu << endl;
	cout << "Thuong la: " << Thuong << endl;
}

float CNhanVienQuanLy::TinhLuong()
{
	return (LuongCoBan * HeSoChucVu + Thuong);
}

CNhanVien* CNhanVienQuanLy::TimKiem(string hoten)
{
	if (HoTen.compare(hoten) == 0)
	{
		return this;
	}
	return NULL;
}