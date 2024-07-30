#include "CSoPhuc.h"

istream& operator>>(istream& is, CSoPhuc& x)
{
	cout << "Phan thuc: ";
	is >> x.thuc;
	cout << "Phan ao: ";
	is >> x.ao;
	return is;
}

ostream& operator<<(ostream& os, CSoPhuc x)
{
	cout << "So phuc la: ";
	if (x.ao > 0)
		os << x.thuc << "+" << x.ao << "i";
	else
		os << x.thuc << " " << x.ao << "i";
	return os;
}