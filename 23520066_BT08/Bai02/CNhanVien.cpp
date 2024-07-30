#include "CNhanVien.h"

void CNhanVien::Nhap()
{
	cout << "Moi nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Moi nhap ngay sinh: ";
	cin >> NgaySinh;
	cin.ignore();
	cout << "Moi nhap luong co ban: ";
	cin >> LuongCoBan;
	cin.ignore();
}

void CNhanVien::Xuat()
{
	cout << "Ten cua nha vien la: " << HoTen << endl;
	cout << "Ngay sinh cua nhan vien la: " << NgaySinh << endl;
	cout << "Luong co ban cua nhan vien la: " << LuongCoBan << endl;
}

float CNhanVien::TinhLuong()
{
	return 0;
}

CNhanVien* CNhanVien::TimKiem(string hoten)
{
	if (HoTen.compare(hoten) == 0)
	{
		return this;
	}
	return NULL;
}