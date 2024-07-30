#include "CCongTy.h"
#include "CNhanVienQuanLy.h"
#include "CNhanVienSanXuat.h"
#include "CNhanVienVanPhong.h"

void CCongTy::Nhap()
{
	cout << "Moi nhap so nhan vien cua cong ty: ";
	cin >> n;
	cin.ignore();
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Moi nhap bo phan lam viec cua nhan vien (0. Quan ly, 1. San xuat, 2. Van phong): ";
		cin >> loai;
		cin.ignore();
		switch (loai)
		{
		case 0:
			ds[i] = new CNhanVienQuanLy;
			break;
		case 1:
			ds[i] = new CNhanVienSanXuat;
			break;
		case 2:
			ds[i] = new CNhanVienQuanLy;
			break;
		};
		cout << "Moi nhap thong tin cua nhan vien: " << endl;
		ds[i]->Nhap();
	}
}

void CCongTy::Xuat()
{
	cout << "So nhan vien cua cong ty la: " << n << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CCongTy::TinhLuong()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->TinhLuong();
	return s;
}

CNhanVien* CCongTy::TimKiem(string hoten)
{
	for (int i = 0; i < n; i++) {
		CNhanVien* kq = ds[i]->TimKiem(hoten);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}