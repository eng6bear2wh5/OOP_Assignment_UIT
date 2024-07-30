#include <iostream>
using namespace std;

struct PhanSo 
{
	int TuSo;
	int MauSo;
};

void Nhap(PhanSo& a);
void Xuat(PhanSo a);
int KiemTra(PhanSo a);

int main() 
{
	PhanSo a;
	Nhap(a);
	int ketqua = KiemTra(a);
	switch (ketqua) {
	case 1:
		cout << "Phan so duong" << endl;
		break;
	case -1:
		cout << "Phan so am" << endl;
		break;
	case 0:
		cout << "Phan so bang 0" << endl;
		break;
	}
	Xuat(a);
	return 1;
}

void Nhap(PhanSo& a) 
{
	cin >> a.TuSo;
	cin >> a.MauSo;
}

int KiemTra(PhanSo a) 
{
	if (a.TuSo * a.MauSo > 0) {
		return 1;
	}
	if (a.TuSo * a.MauSo < 0) {
		return -1;
	}
	return 0;
}

void Xuat(PhanSo a) 
{
	cout << "Phan so la: " << a.TuSo << "/" << a.MauSo;
}