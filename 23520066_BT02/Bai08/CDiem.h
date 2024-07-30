#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class CDiem
{
private:
	float x;
	float y;
public:
	void Nhap();
	void Xuat();
	float KhoangCach(CDiem);
	float LayX();
	void CapNhatX(float);
	float LayY();
	void CapNhatY(float);
};

