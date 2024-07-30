#include "CMay.h"
#include "CChiTietDon.h"
#include "CChiTietPhuc.h"

void CMay::Nhap()
{
	cout << "Moi nhap so luong cac chi tiet cua may: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int loai;
		cout << "Moi nhap loai cua chi tiet may thu " << i+1 << " (0. chi tiet don, 1. chi tiet phuc) : ";
		cin >> loai;
		switch (loai)
		{
		case 0:
			ds[i] = new CChiTietDon;
			break;
		case 1:
			ds[i] = new CChiTietDon;
			break;
		}
		cout << "Moi nhap chi tiet thu " << i + 1 << " cua may: ";
		ds[i]->Nhap();
	}
}

void CMay::Xuat()
{
	cout << "So luong chi tiet cua may la: ";
	cout << n;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

CChiTiet* CMay::TimKiem(long ms)
{
	for (int i = 0; i < n; i++) {
		CChiTiet* kq = ds[i]->TimKiem(ms);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}

int CMay::DemChiTietDon()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		dem = dem + ds[i]->DemChiTietDon();
	return dem;
}

int CMay::TriGia()
{
	int TriGia = 0;
	for (int i = 0; i < n; i++)
		TriGia = TriGia + ds[i]->TinhTien();
	return TriGia;
}