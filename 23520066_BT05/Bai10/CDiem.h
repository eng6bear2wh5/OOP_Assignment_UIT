#pragma once
#include <iostream>
using namespace std;
#include "CDiem.h"

class CDiem
{
private:
	float x;
	float y;
public:
	CDiem();
	CDiem(float, float);
	CDiem(const CDiem&);
	void Dshow();
	CDiem& operator=(const CDiem&);
};

