#pragma once
#include <iostream>
using namespace std;
#include "CDiem.h"
class CTamGiac
{
private:
	CDiem a;
	CDiem b;
	CDiem c;
public:
	void Nhap();
	void Xuat();
	int KiemTraHopLe();
	float ChuVi();
	float Dientich();
	CDiem TrongTam();
};

