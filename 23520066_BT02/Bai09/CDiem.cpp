#include "CDiem.h"
#include <iostream>
using namespace std;

void CDiem::Nhap()
{
	cout << "Nhap x: " << endl;
	cin >> x;
	cout << "Nhap y: " << endl;
	cin >> y;
}

void CDiem::Xuat()
{
	cout << "(" << x << ", " << y << ")" << endl;
}

