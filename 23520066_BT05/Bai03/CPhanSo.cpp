#include "CPhanSo.h"

CPhanSo::CPhanSo()
{
	tu = 2;
	mau = 3;
}

CPhanSo::CPhanSo(int Ttu, int Mmau)
{
	tu = Ttu;
	mau = Mmau;
}

CPhanSo::CPhanSo(const CPhanSo& a)
{
	tu = a.tu;
	mau = a.mau;
}

void CPhanSo::PSshow()
{
	cout << tu << "/" << mau;
}

CPhanSo& CPhanSo::operator=(const CPhanSo& a)
{
	tu = a.tu;
	mau = a.mau;
	return *this;
}