#include "CDuongTron.h"
#include "CDiem.h"

void CDuongTron::Nhap() {
	cout << "Moi nhap tam duong tron: " << endl;
	O.Nhap();
	cout << "Moi nhap ban kinh duong tron: " << endl;
	cin >> R;
}

float CDuongTron::ChuVi() 
{
	float chuvi;
	chuvi = 2 * R * 3.14;
	return chuvi;
}

float CDuongTron::DienTich()
{
	float dientich;
	dientich = R * R * 3.14;
	return dientich;
}

void CDuongTron::Xuat()
{
	cout << "Toa do tam cua duong tron la: " << endl;
	O.Xuat();
	cout << "Ban kinh cua duong tron la: " << R << endl;
}
