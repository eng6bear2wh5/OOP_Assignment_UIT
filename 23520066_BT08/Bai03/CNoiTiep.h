#pragma once
#include <iostream>
using namespace std;
#include "CMachDien.h"

class CNoiTiep : public CMachDien
{
public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};

