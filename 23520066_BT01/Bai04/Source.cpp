#include <iostream>
using namespace std;

struct PhanSo 
{
	int TuSo;
	int MauSo;
};

void Nhap(PhanSo& a);
void Xuat(PhanSo a);
PhanSo Tong(PhanSo a, PhanSo b);
PhanSo Hieu(PhanSo a, PhanSo b);
PhanSo Tich(PhanSo a, PhanSo b);
PhanSo Thuong(PhanSo a, PhanSo b);

int main() 
{
	PhanSo a, b;
	PhanSo kq;
	cout << "Nhap phan so dau tien la: " << endl;
	Nhap(a);
	cout << "\nNhap phan so thu hai la: " << endl;
	Nhap(b);
	kq = Tong(a, b);
	cout << "\nTong cua 2 phan so la: ";
	Xuat(kq);
	kq = Hieu(a, b);
	cout << "\nHieu cua 2 phan so la: ";
	Xuat(kq);
	kq = Tich(a, b);
	cout << "\nTich cua 2 phan so la: ";
	Xuat(kq);
	kq = Thuong(a, b);
	cout << "\nThuong cua 2 phan so la: ";
	Xuat(kq);
	return 1;
}

void Nhap(PhanSo& a) 
{
	cin >> a.TuSo;
	cin >> a.MauSo;
}

void Xuat(PhanSo a) 
{
	cout << a.TuSo << "/" << a.MauSo;
}

PhanSo Tong(PhanSo a, PhanSo b) 
{
	PhanSo temp;
	temp.TuSo = a.TuSo * b.MauSo + b.TuSo * a.MauSo;
	temp.MauSo = a.MauSo * b.MauSo;
	return temp;
}

PhanSo Hieu(PhanSo a, PhanSo b) 
{
	PhanSo temp;
	temp.TuSo = a.TuSo * b.MauSo - b.TuSo * a.MauSo;
	temp.MauSo = a.MauSo * b.MauSo;
	return temp;
}

PhanSo Tich(PhanSo a, PhanSo b) 
{
	PhanSo temp;
	temp.TuSo = a.TuSo * b.TuSo;
	temp.MauSo = a.MauSo * b.MauSo;
	return temp;
}

PhanSo Thuong(PhanSo a, PhanSo b) 
{
	PhanSo temp;
	temp.TuSo = a.TuSo * b.MauSo;
	temp.MauSo = a.MauSo * b.TuSo;
	return temp;
}