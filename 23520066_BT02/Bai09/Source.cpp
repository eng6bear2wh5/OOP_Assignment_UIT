#include <iostream>
using namespace std;
#include "CDuongTron.h"

int main() {
	CDuongTron a;
	a.Nhap();
	cout << "Chu vi cua duong tron la: " << a.ChuVi() << endl;
	cout << "Dien tich cua duong tron la: " << a.DienTich() << endl;
	a.Xuat();
	return 1;

}