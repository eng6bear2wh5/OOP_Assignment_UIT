#include "CChiTietDon.h"

void CChiTietDon::Nhap()
{
	cout << "\nMoi nhap ma so cua chi tiet don: ";
	cin >> MaSo;
	cout << "Moi nhap gia tien cua chi tiet don: ";
	cin >> GiaTien;
}

void CChiTietDon::Xuat()
{
	cout << "\nMa so cua chi tiet don la: " << endl;
	cout << MaSo;
	cout << "Gia tien cua chi tiet don la: " << endl;
	cout << GiaTien;
}

CChiTiet* CChiTietDon::TimKiem(long ms)
{
	if (MaSo = ms)
		return this;
}

int CChiTietDon::DemChiTietDon()
{
	return 1;
}

int CChiTietDon::TinhTien()
{
	return GiaTien;
}