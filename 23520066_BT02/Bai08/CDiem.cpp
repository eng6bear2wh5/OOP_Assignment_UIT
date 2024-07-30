#include "CDiem.h"

void CDiem::Nhap() 
{
	cout << "nhap x: " << endl;
	cin >> x;
	cout << "nhap y: " << endl;
	cin >> y;
}

void CDiem::Xuat() 
{
	cout << "toa do x: " << x << endl;
	cout << "toa do y: " << y << endl;
}

float CDiem::KhoangCach(CDiem a)
{
	return sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y));
}

float CDiem::LayX()
{
	return x;
}

void CDiem::CapNhatX(float xMoi)
{
	x = xMoi;
}

float CDiem::LayY()
{
	return y;
}

void CDiem::CapNhatY(float yMoi)
{
	y = yMoi;
}