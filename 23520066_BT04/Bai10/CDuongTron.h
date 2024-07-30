#pragma once
#include "CDiem.h"
#include <iostream>
using namespace std;

class CDuongTron
{
private:
	CDiem O;
	float R;
public:
	CDuongTron();
	CDuongTron(float, float, float);
	CDuongTron(const CDuongTron&);
	~CDuongTron();
};

