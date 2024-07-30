#pragma once
#include <iostream>
using namespace std;
#include "CDiem.h"

class CHinhCau
{
private:
	CDiem O;
	float R;
public:
	CHinhCau();
	CHinhCau(float, float, float, float);
	CHinhCau(const CHinhCau&);
	~CHinhCau();
};

