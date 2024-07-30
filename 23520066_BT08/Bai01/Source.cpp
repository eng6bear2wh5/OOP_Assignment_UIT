#include "CMay.h"
#include "CChiTietDon.h"
#include "CChiTietPhuc.h"
#include "CChiTiet.h"
#include <iostream>
using namespace std;

int main()
{
	CMay A;
	A.Nhap();
	A.Xuat();
	long ms;
	cout << "Moi nhap ma so cua chi tiet can tim kiem: ";
	cin >> ms;
	CChiTiet* TKCT = A.TimKiem(ms);
	cout << "Chi tiet dang tim kiem la: ";
	if (TKCT !=  NULL) {
		cout << "Tim thay roi!!" << endl;
		TKCT->Xuat();
	}
	else {
		cout << "Khong tim thay !!" << endl;
	}
	int SoLuongCTD = A.DemChiTietDon();
	cout << "So luong chi tiet don co trong may la: " << SoLuongCTD;
	int TriGia = A.TriGia();
	cout << "Tong gia tri cua may la: " << TriGia;
	return 1;
}