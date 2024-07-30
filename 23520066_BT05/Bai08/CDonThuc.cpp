#include "CDonThuc.h"

CDonThuc::CDonThuc()
{
	HeSo = 1;
	SoMu = 3;
}

CDonThuc::CDonThuc(int hHeso, int sSoMu)
{
	HeSo = hHeSo;
	SoMu = sSoMu;
}

CDonThuc::CDonThuc(const CDonThuc& a)
{
	HeSo = a.HeSo;
	SoMu = a.SoMu;
}

void CDonThuc::DTshow()
{
	cout << HeSo << "x" << "^" << SoMu;
}
CDonThuc& CDonThuc::operator=(const CDonThuc& a)
{
	HeSo = a.HeSo;
	SoMu = a.SoMu;
	return *this;
}