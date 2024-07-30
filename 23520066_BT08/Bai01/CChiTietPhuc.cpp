#include "CChiTietPhuc.h"
#include "CChiTietDon.h"

void CChiTietPhuc::Nhap()
{
	cout << "\nMoi nhap ma so chi tiet cua chi tiet phuc: ";
	cin >> MaSo;
	cout << "Moi nhap so luong cac chi tiet thanh phan cua chi tiet phuc: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int loai;
		cout << "Moi nhap loai cua chi tiet thanh phan cua chi tiet phuc (0. chi tiet don, 1. chi tiet phuc): ";
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
		cout << "Moi nhap chi tiet thanh phan thu " << i + 1 << "chi tiet phuc: ";
		ds[i]->Nhap();
	}
}

void CChiTietPhuc::Xuat()
{
	cout << "So luong chi tiet thanh phan cua chi tiet phuc la: " << endl;
	cout << n;
	cout << "Ma so cua chi tiet phuc la: " << endl;
	cout << MaSo;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

CChiTiet* CChiTietPhuc::TimKiem(long ms)
{
	if (MaSo == ms)
		return this;
	for (int i = 0; i < n; i++) {
		CChiTiet* kq = ds[i]->TimKiem(ms);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}

int CChiTietPhuc::DemChiTietDon()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		dem = dem + ds[i]->DemChiTietDon();
	return dem;
}

int CChiTietPhuc::TinhTien()
{
	int TienCTP = 0;
	for (int i = 0; i < n; i++)
		TienCTP = TienCTP + ds[i]->DemChiTietDon();
	return TienCTP;
}