#pragma once
#include <iostream>
using namespace std;
#include "CDiem.h"

class CDuongTron
{
private:
	CDiem O;
	int R;
public:
	void Nhap();
	void Xuat();
	float ChuVi();
	float DienTich();
};

