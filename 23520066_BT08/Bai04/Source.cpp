#include "CODia.h"
#include "CTapTin.h"
#include "CThuMuc.h"
#include "CDoiTuongLuuTru.h"
#include <iostream>
using namespace std;

int main()
{
	CODia A;
	A.Nhap();
	A.Xuat();
	float TDL = A.TongDungLuong();
	cout << "Tong dung luong cua o dia la: " << TDL << endl;
	int SLTT = A.DemTapTin();
	cout << "So luong tap tin cua o dia la: " << SLTT << endl;
	int SLTMC = A.DemThuMucCon();
	cout << "So luong thu muc con cua o dia la: " << SLTMC - 1 << endl;
	return 1;
}