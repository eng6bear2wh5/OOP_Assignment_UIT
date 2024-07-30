#include "CHonSo.h"

CHonSo& CHonSo::operator=(const CHonSo& a)
{
	nguyen = a.nguyen;
	tu = a.tu;
	mau = a.mau;
	return *this;
}

CHonSo::CHonSo()
{
	nguyen = 1;
	tu = 2;
	mau = 3;
}

CHonSo::CHonSo(int Nnguyen, int Ttu, int Mmau)
{
	nguyen = Nnguyen;
	tu = Ttu;
	mau = Mmau;
}

CHonSo::CHonSo(const CHonSo& a)
{
	nguyen = a.nguyen;
	tu = a.tu;
	mau = a.mau;
}

void CHonSo::HSshow()
{
	cout << nguyen << "va" << tu << "/" << mau;
}