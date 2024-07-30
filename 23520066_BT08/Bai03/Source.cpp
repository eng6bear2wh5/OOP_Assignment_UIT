#include <iostream>
using namespace std;
#include <string>
#include "CMachDien.h"
#include "CNoiTiep.h"
#include "CSongSong.h"
#include "CDienTro.h"

int main()
{
	CMachDien *A = NULL;
	int loai;
	cout << "Nhap loai mach dien (0. NT, 1.SS, 2.DT): ";
	cin >> loai;
	cin.ignore();
	switch (loai)
	{
	case 0:
		A = new CNoiTiep;
		break;
	case 1:
		A = new CSongSong;
		break;
	case 2:
		A = new CDienTro;
		break;
	};
	cout << "Moi nhap thong tin mach dien: " << endl;
	A->Nhap();
	cout << endl;
	cout << "Mach dien ban dau la: " << endl;
	A->Xuat();
	cout << "Dien tro tuong duong cua mach dien la: " << A->TinhDienTro();
	return 1;
}