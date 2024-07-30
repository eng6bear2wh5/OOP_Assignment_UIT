#pragma once
#include <iostream>
#include "CMachDien.h"
#include <string>
using namespace std;

class CDienTro: public CMachDien
{
protected:
	string MaSoThietBi;
	float R;
public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};

