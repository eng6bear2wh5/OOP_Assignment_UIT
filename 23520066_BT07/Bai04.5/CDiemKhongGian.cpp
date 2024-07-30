#include "CDiemKhongGian.h"

istream& operator >> (istream& is, CDiemKhongGian& a)
{
	cout << "Moi nhap x: ";
	is >> a.x;
	cout << "Moi nhap y: ";
	is >> a.y;
	cout << "Moi nhap z: ";
	is >> a.z;
	return is;
}

ostream& operator << (ostream& os, CDiemKhongGian a)
{
	os << "(" << a.x << ", " << a.y << ", " << a.z << ")" << endl;
	return os;
}

int CDiemKhongGian::operator == (const CDiemKhongGian& a)
{
	if (x == a.x && y == a.y && z == a.z)
		return 1;
	return 0;
}

int CDiemKhongGian::operator != (const CDiemKhongGian& a)
{
	if (x != a.x || y != a.y || z != a.z)
		return 1;
	return 0;
}