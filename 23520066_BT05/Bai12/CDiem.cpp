#include "CDiem.h"

CDiem& CDiem::operator=(const CDiem& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
	return *this;
}

CDiem::CDiem()
{
	x = 2;
	y = 4;
	z = 5;
}

CDiem::CDiem(float Xx, float Yy, float Zz)
{
	x = Xx;
	y = Yy;
	z = Zz;
}

CDiem::CDiem(const CDiem& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}

void CDiem::Dshow()
{
	cout << "\nToa do diem la: " << "(" << x << ", " << y << ", " << z << ")";
}
