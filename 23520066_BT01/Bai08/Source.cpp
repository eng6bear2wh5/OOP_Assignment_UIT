#include <iostream>
#include <cmath>
using namespace std;

struct Diem 
{
	int x;
	int y;
};

struct Canh 
{
	float a;
	float b;
	float c;
};

void Nhap(Diem& a);
Canh TinhCanh(Diem a, Diem b, Diem c, Canh& tamgiac);
float ChuVi(Canh tamgiac);
float DienTich(Canh tamgiac);
Diem ToaDoTrongTam(Diem a, Diem b, Diem c);

int main()
{
	Diem diem1, diem2, diem3;
	Canh tamgiac;
	Canh TamGiac;
	cout << "Moi nhap toa do cua dinh dau tien: " << endl;
	Nhap(diem1);
	cout << "Moi nhap toa do cua dinh thu hai: " << endl;
	Nhap(diem2);
	cout << "Moi nhap toa do cua dinh thu ba: " << endl;
	Nhap(diem3);
	TinhCanh(diem1, diem2, diem3, tamgiac);
	TamGiac = TinhCanh(diem1, diem2, diem3, tamgiac);
	Diem TRONGTAM = ToaDoTrongTam(diem1, diem2, diem3);
	cout << "Chu vi cua tam giac la: " << ChuVi(TamGiac) << endl;
	cout << "Dien tich cua tam giac la: " << DienTich(TamGiac) << endl;
	cout << "Trong tam cua tam giac la: " << TRONGTAM.x << " " << TRONGTAM.y << endl;
	return 1;
}

void Nhap(Diem& a) 
{
	cout << "Moi nhap x " << endl;
	cin >> a.x;
	cout << "Moi nhap y: " << endl;
	cin >> a.y;
}

Canh TinhCanh(Diem a, Diem b, Diem c, Canh& tamgiac) 
{
	tamgiac.a = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
	tamgiac.b = sqrt((c.x - b.x) * (c.x - b.x) + (c.y - b.y) * (c.y - b.y));
	tamgiac.c = sqrt((a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y));
	return tamgiac;
}

float ChuVi(Canh tamgiac) 
{
	float chuvi;
	chuvi = tamgiac.a + tamgiac.b + tamgiac.c;
	return chuvi;
}

float DienTich(Canh tamgiac) 
{
	float dientich;
	float p;
	p = (tamgiac.a + tamgiac.b + tamgiac.c) / 2;
	dientich = sqrt(p * (p - tamgiac.a) * (p - tamgiac.b) * (p - tamgiac.c));
	return dientich;
}

Diem ToaDoTrongTam(Diem a, Diem b, Diem c) 
{
	Diem trongtam;
	trongtam.x = (a.x + b.x + c.x) / 3;
	trongtam.y = (a.y + b.y + c.y) / 3;
	return trongtam;
}