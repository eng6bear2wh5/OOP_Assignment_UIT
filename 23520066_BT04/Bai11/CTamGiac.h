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
	CTamGiac();
	CTamGiac(float, float, float, float, float, float);
	CTamGiac(const CTamGiac&);
	~CTamGiac();
};

