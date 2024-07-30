#include "CTamGiac.h"
#include "CDiem.h"

istream& operator>>(istream& is, CTamGiac& a)
{
	cout << "Moi nhap diem A: ";
	is >> a.A;
	cout << "Moi nhap diem B: ";
	is >> a.B;
	cout << "Moi nhap diem C: ";
	is >> a.C;
	return is;
}

ostream& operator<<(ostream& os, CTamGiac a)
{
	cout << "diem A: ";
	os << a.A << endl;
	cout << "diem B: ";
	os << a.B << endl;
	cout << "Moi nhap diem C: ";
	os << a.C << endl;
	return os;
}