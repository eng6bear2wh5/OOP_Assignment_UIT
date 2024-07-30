#pragma once
#include <iostream>
using namespace std;
#include "CDiem.h"

class CTamGiac
{
private:
	CDiem A;
	CDiem B;
	CDiem C;
public:
	friend istream& operator >> (istream&, CTamGiac&);
	friend ostream& operator << (ostream&, CTamGiac);
	int operator == (const CTamGiac&);
	int operator != (const CTamGiac&);
};

