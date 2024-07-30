#include "CDiem.h"
#include <iostream>
using namespace std;

CDiem::CDiem()
{
	x = 0;
	y = 1;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}

CDiem::CDiem(int X, int Y)
{
	x = X;
	y = Y;
	cout << "Phuong thuc thiet lap nhan tham so dau vao" << endl;

}

CDiem::CDiem(const CDiem& a)
{
	x = a.x;
	y = a.y;
	cout << "Phuong thuc thiet lap sao chep " << endl;
}

CDiem::~CDiem()
{
	cout << "Phuong thuc thiet lap pha huy" << endl;
}