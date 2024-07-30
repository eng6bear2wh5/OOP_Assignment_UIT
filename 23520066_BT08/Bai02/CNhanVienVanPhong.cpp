#include "CNhanVienVanPhong.h"

void CNhanVienVanPhong::Nhap()
{
	CNhanVien::Nhap();
	cout << "Moi nhap so ngay lam viec: ";
	cin >> SoNgayLamViec;
	cin.ignore();
	cout << "Moi nhap tro cap: ";
	cin >> TroCap;
	cin.ignore();
}

void CNhanVienVanPhong::Xuat()
{
	CNhanVien::Xuat();
	cout << "So ngay lam viec la: " << SoNgayLamViec << endl;
	cout << "Tro cap la: " << TroCap << endl;
}

float CNhanVienVanPhong::TinhLuong()
{
	return (LuongCoBan + SoNgayLamViec * 100000 + TroCap);
}

CNhanVien* CNhanVienVanPhong::TimKiem(string hoten)
{
	if (HoTen.compare(hoten))
		return this;
	return NULL;
}