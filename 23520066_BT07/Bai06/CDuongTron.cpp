#include "CDuongTron.h"

istream& operator >> (istream& is, CDuongTron& a)
{
	cout << "Moi nhap toa do tam: ";
	is >> a.O;
	cout << "Moi nhap ban kinh: ";
	is >> a.R;
	return is;
}

ostream& operator << (ostream& os, CDuongTron a)
{
	cout << "Tam duong tron la: ";
	os << a.O;
	cout << "Ban kinh duong tron la: ";
	os << a.R;
	return os;
}

float CDuongTron::DienTich()
{
	return (R * R * 3.14);
}

int CDuongTron::operator == (CDuongTron& a)
{
	float S1 = this->DienTich();
	float S2 = a.DienTich();
	if (S1 == S2)
		return 1;
	return 0;
}

int CDuongTron::operator != (CDuongTron& a)
{
	float S1 = this->DienTich();
	float S2 = a.DienTich();
	if (S1 != S2)
		return 1;
	return 0;
}

int CDuongTron::operator != (CDuongTron& a)
{
	float S1 = this->DienTich();
	float S2 = a.DienTich();
	if (S1 > S2)
		return 1;
	return 0;
}

int CDuongTron::operator != (CDuongTron& a)
{
	float S1 = this->DienTich();
	float S2 = a.DienTich();
	if (S1 >= S2)
		return 1;
	return 0;
}

int CDuongTron::operator != (CDuongTron& a)
{
	float S1 = this->DienTich();
	float S2 = a.DienTich();
	if (S1 < S2)
		return 1;
	return 0;
}

int CDuongTron::operator != (CDuongTron& a)
{
	float S1 = this->DienTich();
	float S2 = a.DienTich();
	if (S1 <= S2)
		return 1;
	return 0;
}