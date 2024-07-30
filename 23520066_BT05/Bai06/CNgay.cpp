#include "CNgay.h"

CNgay& CNgay::operator=(const CNgay& a)
{
	ngay = a.ngay;
	thang = a.thang;
	nam = a.nam;
	return *this;
}

CNgay::CNgay()
{
	ngay = 16;
	thang = 02;
	nam = 2005;
}

CNgay::CNgay(int Nngay, int Tthang, int Nnam)
{
	ngay = Nngay;
	thang = Tthang;
	nam = Nnam;
}

CNgay::CNgay(const CNgay& a)
{
	ngay = a.ngay;
	thang = a.thang;
	nam = a.nam;
}

void CNgay::Nshow()
{
	cout << ngay << "/" << thang << "/" << nam;
}
