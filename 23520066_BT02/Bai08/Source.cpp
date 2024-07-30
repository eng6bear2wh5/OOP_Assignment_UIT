#include <iostream>
using namespace std;
#include "CDiem.h"
#include "CTamGiac.h"

int main() 
{
	CTamGiac t;
	t.Nhap();
	while (t.KiemTraHopLe() == 0) {
		cout << "Tam giac vua nhap khong hop le.";
		t.Nhap();
	}
	t.Xuat();
	float chuvi = t.ChuVi();
	float dientich = t.Dientich();
	CDiem G = t.TrongTam();
	cout << "Chu vi cua tam giac la: " << chuvi << endl;
	cout << "Dien tich cua tam giac la: " << dientich << endl;
	cout << "Trong tam tam giac: ";
	G.Xuat();
	return 1;
}
