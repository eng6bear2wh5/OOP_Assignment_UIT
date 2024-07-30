#include "CDuongThang.h"
#include <iostream>
using namespace std;

istream& operator>>(istream& is, CDuongThang& x)
{
	cout << "Moi nhap a: ";
	is >> x.a;
	cout << "Moi nhap b: ";
	is >> x.b;
	return is;
}

ostream& operator<<(ostream& os, CDuongThang x)
{
	if (x.b > 0) {
		os << "y = " <<  x.a << "*" << "x" << "+" << x.b;
	}
	else if (x.b == 0)
	{
		os << "y = " << x.a << "*" << "x";
	}
	else if (x.a == 0)
	{
		os << "y = " << x.b;
	}
	else if (x.a == 0 && x.b == 0)
	{
		os << "y = 0";
	}
	return os;
}