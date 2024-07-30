#include "CODia.h"
#include "CTapTin.h"
#include "CThuMuc.h"

void CODia::Nhap() {
	cout << "Moi nhap so luong doi tuong luu tru: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int loai;
		cout << "Nhap loai doi tuong luu tru (0.Tap tin, 1.Thu muc): ";
		cin >> loai;
		cin.ignore();
		switch (loai)
		{
		case 0:
			ds[i] = new CTapTin;
			break;
		case 1:
			ds[i] = new CThuMuc;
			break;
		};
		cout << "Moi nhap thong tin o dia: " << endl;
		ds[i]->Nhap();
	}
}

void CODia::Xuat()
{
	cout << "So luong doi tuong luu tru la: ";
	cout << n << endl;
	cout << "Thong tin o dia la: " << endl;
	for (int i = 0; i < n; i++) {
		ds[i]->Xuat();
	}
}

float CODia::TongDungLuong()
{
	float s = 0;
	for (int i = 0; i < n; i++) {
		s = s + ds[i]->TongDungLuong();
	}
	return s;
}
int CODia::DemTapTin()
{
	int dem = 0;
	for (int i = 0; i < n; i++) {
		dem = dem + ds[i]->DemTapTin();
	}
	return dem;
}

int CODia::DemThuMucCon()
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		count = count + ds[i]->DemThuMucCon();
	}
	return count;
}