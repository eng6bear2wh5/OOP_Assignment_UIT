#include "CNoiTiep.h"
#include "CSongSong.h"
#include "CDienTro.h"


void CNoiTiep::Nhap()
{
	cout << "Moi nhap so mach dien trong mach noi tiep: ";
	cin >> n;
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Moi nhap loai mach dien (0. Mach noi tiep, 1. Mach song song, 2. Dien tro): ";
		cin >> loai;
		cin.ignore();
		switch (loai)
		{
		case 0:
			ds[i] = new CNoiTiep;
			break;
		case 1:
			ds[i] = new CSongSong;
			break;
		case 2:
			ds[i] = new CDienTro;
		}
		cout << "Moi nhap thong tin cua mach dien: " << endl;
		ds[i]->Nhap();
	}
}

void CNoiTiep::Xuat()
{
	cout << "So luong mach dien co trong mach noi tiep la: " << n << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CNoiTiep::TinhDienTro()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->TinhDienTro();
	return s;
}