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
	CDuongTron();
	CDuongTron(float, float, float);
	CDuongTron(const CDuongTron&);
	CDuongTron& operator=(const CDuongTron&);
	void DTshow();
};

