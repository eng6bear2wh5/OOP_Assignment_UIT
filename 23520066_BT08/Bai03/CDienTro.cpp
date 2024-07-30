#include "CDienTro.h"

void CDienTro::Nhap()
{
	cout << "Moi nhap ma so thiet bi: ";
	getline(cin, MaSoThietBi);
	cout << "Moi nhap do do dien tro: ";
	cin >> R;
}

void CDienTro::Xuat()
{
	cout << "Ma so thiet bi la: " << MaSoThietBi << endl;
	cout << "Do do dien tro la: " << R << endl;
}

float CDienTro::TinhDienTro()
{
	return R;
}