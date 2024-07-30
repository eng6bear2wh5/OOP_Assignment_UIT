#pragma once
#include <iostream>
using namespace std;
#include "CThoiGian.h"

class CThoiGian
{
private:
	int gio;
	int phut;
	int giay;
public:
	CThoiGian();
	CThoiGian(int, int, int);
	CThoiGian(const CThoiGian&);
	void TGshow();
	CThoiGian& operator=(const CThoiGian&);
};
