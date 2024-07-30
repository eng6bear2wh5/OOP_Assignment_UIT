#include "CDiemKhongGian.h"
#include <iostream>
using namespace std;

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

CDiemKhongGian::~CDiemKhongGian()
{
	cout << "Phuong thuc thiet lap pha huy";
}