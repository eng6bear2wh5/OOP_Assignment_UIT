#pragma once
#include <iostream>
using namespace std;
#include "CDiem.h"

class CDuongTron
{
private:
	CDiem O;
	float R;
public:
	friend istream& operator>>(istream&, CDuongTron&);
	friend ostream& operator<<(ostream&, CDuongTron);
};

