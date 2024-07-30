#include "CTamGiac.h"
#include "CDiem.h"
using namespace std;

void CTamGiac::Nhap() 
{
	cout << "Moi nhap 3 diem cua tam giac: " << endl;
	cout << "Nhap diem A: " << endl;
	a.Nhap();
	cout << "Nhap diem B: " << endl;
	b.Nhap();
	cout << "Nhap diem C: " << endl;
	c.Nhap();
}

void CTamGiac::Xuat() 
{
	cout << "Diem A: " << endl;
	a.Xuat();
	cout << "Diem B: " << endl;
	b.Xuat();
	cout << "Diem C: " << endl;
	c.Xuat();
	
}

float CTamGiac::ChuVi() 
{
	float canh1 = a.KhoangCach(b);
	float canh2 = b.KhoangCach(c);
	float canh3 = c.KhoangCach(a);
	return (canh1 + canh2 + canh3);
}


float CTamGiac::Dientich() 
{
	float canh1 = a.KhoangCach(b);
	float canh2 = b.KhoangCach(c);
	float canh3 = c.KhoangCach(a);
	float p = ChuVi()/2 ;
	return  sqrt(p * (p - canh1) * (p - canh2) * (p - canh3));
}

int CTamGiac::KiemTraHopLe()
{
	float AB = a.KhoangCach(b);
	float AC = a.KhoangCach(c);
	float BC = b.KhoangCach(c);
	if (AB + AC > BC && AB + BC > AC && AC + BC > AB)
		return 1;
	return 0;
}

CDiem CTamGiac::TrongTam()
{
	CDiem G;
	float gX = (a.LayX() + b.LayX() + c.LayX()) / 3;
	G.CapNhatX(gX);
	float gY = (a.LayY() + b.LayY() + c.LayY()) / 3;
	G.CapNhatX(gY);
	return G;
}