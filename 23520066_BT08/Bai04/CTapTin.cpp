#include "CTapTin.h"
#include "CThuMuc.h"

void CTapTin::Nhap() {
	cout << "Moi nhap ten thu muc: ";
	getline(cin, Ten);
	cout << "Moi nhap thang tao: " << endl;
	cin >> NgayThangTao;
	cout << "Moi nhap dung luong: ";
	cin >> DungLuong;
}

void CTapTin::Xuat()
{
	cout << "Ten tap tin la: " ;
	cout << Ten << endl;
	cout << "Ngay thang tao lap la: ";
	cout << NgayThangTao << endl;
	cout << "Dung luong tap tin la: ";
	cout << DungLuong << endl;
}

float CTapTin::TongDungLuong()
{
	return DungLuong;
}

int CTapTin::DemTapTin()
{
	return 1;

}

int CTapTin::DemThuMucCon()
{
	return 0;
}