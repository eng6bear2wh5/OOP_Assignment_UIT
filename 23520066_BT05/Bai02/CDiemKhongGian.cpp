#include "CDiemKhongGian.h"


CDiemKhongGian::CDiemKhongGian()
{
	x = 1;
	y = 2;
	z = 3;
}

CDiemKhongGian::CDiemKhongGian(float Xx, float Yy, float Zz)
{
	x = Xx;
	y = Yy;
	z = Zz;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}

void CDiemKhongGian::DKGshow()
{
	cout << "Toa do diem khong gian la: " << "(" << x << ", " << y << ", " << z << ")";
}

CDiemKhongGian& CDiemKhongGian::operator = (const CDiemKhongGian& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
	return *this;
}