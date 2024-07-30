#include "CDuongThang.h"

CDuongThang& CDuongThang::operator=(const CDuongThang& x)
{
	a = x.a;
	b = x.b;
	return *this;
}

CDuongThang::CDuongThang()
{
	a = 3;
	b = 2;
}

CDuongThang::CDuongThang(int Aa, int Bb)
{
	a = Aa;
	b = Bb;
}

CDuongThang::CDuongThang(const CDuongThang& x)
{
	a = x.a;
	b = x.b;
}

void CDuongThang::DTshow()
{
	cout << "y = " << a << "x + " << b;
}