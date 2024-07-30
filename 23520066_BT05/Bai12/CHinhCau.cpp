#include "CHinhCau.h"

CHinhCau& CHinhCau::operator=(const CHinhCau& a)
{
	O = a.O;
	R = a.R;
	return *this;
}

CHinhCau::CHinhCau()
{
	O = CDiem();
	R = 5;
}

CHinhCau::CHinhCau(float Xx, float Yy, float Zz, float Rr)
{
	O = CDiem(Xx, Yy, Rr);
	R = Rr;
}

CHinhCau::CHinhCau(const CHinhCau& a)
{
	O = CDiem(a.O);
	R = a.R;
}

void CHinhCau::HCshow()
{
	cout << "Hinh cau có nhung thong tin sau: ";
	O.Dshow();
	cout << "\nBan kinh la: " << R;
}