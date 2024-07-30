#include "CDiemKhongGian.h"

istream& operator>>(istream& is, CDiemKhongGian& A)
{
	cout << "Moi nhap toa do trong khong gian: " << endl;
	cout << "Nhap x: ";
	is >> A.x;
	cout << "Nhap y: ";
	is >> A.y;
	cout << "Nhap z: ";
	is >> A.z;
	return is;
}

ostream& operator<<(ostream& os, CDiemKhongGian A)
{
	cout << "Toa do trong khong gian la: ";
	os << "(" << A.x << ", " << A.y << ", " << A.z << ")";
	return os;
}