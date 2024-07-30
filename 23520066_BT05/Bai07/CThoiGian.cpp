#include "CThoiGian.h"

CThoiGian::CThoiGian()
{
	gio = 8;
	phut = 30;
	giay = 30;
}

CThoiGian::CThoiGian(int Ggio, int Pphut, int Ggiay)
{
	gio = Ggio;
	phut = Pphut;
	giay = Ggiay;
}

CThoiGian::CThoiGian(const CThoiGian& a)
{
	gio = a.gio;
	phut = a.phut;
	giay = a.giay;
}

CThoiGian& CThoiGian::operator=(const CThoiGian& a)
{
	gio = a.gio;
	phut = a.phut;
	giay = a.giay;
	return *this;
}

void CThoiGian::TGshow()
{
	cout << gio << ":" << phut << ":" << giay;
}