#include "CHonSo.h"

istream& operator>>(istream& is, CHonSo& x)
{
	cout << "Moi nhap phan nguyen la: ";
	is >> x.nguyen;
	cout << "Moi nhap tu so: ";
	is >> x.tu;
	cout << "Moi nhap mau so: ";
	is >> x.mau;
	return is;
}
ostream& operator<<(ostream& os, CHonSo x)
{
	os << x.nguyen << " va " << x.tu << "/" << x.mau;
	return os;
}