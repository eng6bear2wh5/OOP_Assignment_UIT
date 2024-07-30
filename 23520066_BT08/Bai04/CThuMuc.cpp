#include "CThuMuc.h"
#include "CDoiTuongLuuTru.h"
#include "CTapTin.h"

void CThuMuc::Nhap() {
	cout << "Moi nhap ten thu muc: ";
	getline(cin, Ten);
	cout << "Moi nhap thang tao: " << endl;
	cin >> NgayThangTao;
	cout << "Moi nhap dung luong: ";
	cin >> DungLuong;
	cout << "Moi nhap so luong thu muc thanh phan: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int loai;
		cout << "Nhap loai thu muc thanh phan (0.Tap tin, 1.Thu muc): ";
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
		cout << "Moi nhap thong tin thu muc: " << endl;
		ds[i]->Nhap();
	}
}

void CThuMuc::Xuat()
{
	cout << "Ten thu muc la: ";
	cout << Ten << endl;
	cout << "Ngay thang tao lap la: ";
	cout << NgayThangTao << endl;
	cout << "Dung luong thu muc la: ";
	cout << DungLuong << endl;
	cout << "So luong thu muc thanh phan la: ";
	cout << n << endl;
	cout << "Thong tin thu muc la: " << endl;
	for (int i = 0; i < n; i++) {
		ds[i]->Xuat();
	}
}

float CThuMuc::TongDungLuong()
{
	float s = 0;
	for (int i = 0; i < n; i++) {
		s = s + ds[i]->TongDungLuong();
	}
	return s;
}
int CThuMuc::DemTapTin()
{
	int dem = 0;
	for (int i = 0; i < n; i++) {
		dem = dem + ds[i]->DemTapTin();
	}
	return dem;
}

int CThuMuc::DemThuMucCon()
{
	int count = 1;
	for (int i = 0; i < n; i++) {
		count = count + ds[i]->DemThuMucCon();
	}
	return count;
}