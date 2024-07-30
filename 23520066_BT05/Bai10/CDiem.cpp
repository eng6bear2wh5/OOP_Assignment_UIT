#include "CDiem.h"

CDiem::CDiem()
{
	x = 1;
	y = 2;
}
CDiem::CDiem(float Xx, float Yy)
{
	x = Xx;
	y = Yy;
}

CDiem::CDiem(const CDiem& a)
{
	x = a.x;
	y = a.y;
}

CDiem& CDiem::operator=(const CDiem& a)
{
	x = a.x;
	y = a.y;
	return *this;
}

void CDiem::Dshow()
{
	cout << "(" << x << ", " << y << ")";

}