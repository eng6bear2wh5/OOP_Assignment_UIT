#include "CDuongTron.h"

CDuongTron::CDuongTron()
{
	O = CDiem();

}

CDuongTron::CDuongTron(float Xx, float Yy, float Rr)
{
	O = CDiem(Xx, Yy);
	R = Rr;
}

CDuongTron::CDuongTron(const CDuongTron& a)
{
	O = CDiem(a.O);
	R = a.R;
}

CDuongTron& CDuongTron::operator=(const CDuongTron& a)
{
	O = a.O;
	R = a.R;
	return *this;
}

void CDuongTron::DTshow()
{
	cout << "Toa do tam cua duong tron: ";
	O.Dshow();
	cout << "\nBan kinh cua duong tron la: ";
	cout << R;
}