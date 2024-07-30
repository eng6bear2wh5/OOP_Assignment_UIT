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
	friend istream& operator>>(istream&, CHinhCau&);
	friend ostream& operator<<(ostream&, CHinhCau);
};

