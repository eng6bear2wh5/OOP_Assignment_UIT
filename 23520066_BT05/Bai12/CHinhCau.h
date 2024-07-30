#pragma once
#include <iostream>
using namespace std;
#include "CDiem.h"
#include "CHinhCau.h"

class CHinhCau
{
private:
	CDiem O;
	float R;
public:
	CHinhCau();
	CHinhCau(float, float, float, float);
	CHinhCau(const CHinhCau&);
	void HCshow();
	CHinhCau& operator=(const CHinhCau&);
};

