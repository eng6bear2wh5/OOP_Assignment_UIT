#pragma once
#include <iostream>
using namespace std;
#include "CDiem.h"
#include "CTamGiac.h"

class CTamGiac
{
private:
	CDiem a;
	CDiem b;
	CDiem c;
public:
	CTamGiac();
	CTamGiac(float, float, float, float, float, float);
	CTamGiac(const CTamGiac&);
	void TGshow();
	CTamGiac& operator=(const CTamGiac&);
};

