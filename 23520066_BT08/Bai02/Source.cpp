#include <iostream>
using namespace std;
#include "CNhanVien.h"
#include "CNhanVienQuanLy.h"
#include "CNhanVienSanXuat.h"
#include "CNhanVienVanPhong.h"
#include "CCongTy.h"
#include <string>

int main()
{
	CCongTy A;
	A.Nhap();
	A.Xuat();
	float tongluong = A.TinhLuong();
	cout << "Tong luong cua cac nhan vien trong cong ty: " << tongluong;
	string ht;
	cout << "Moi nhap ho ten cua nhan vien can tim: ";
	getline(cin, ht);
	CNhanVien* kq = A.TimKiem(ht);
	if (kq != NULL) {
		cout << "Tim thay !!" << endl;
		kq->Xuat();
	}
	else {
		cout << "Khong tim thay !!";
	}
	return 1;
}