#pragma once
#include <iostream>
using namespace std;
#include "CDiem.h"

class CDiem
{
private:
	float x;
	float y;
	float z;
public:
	CDiem();
	CDiem(float, float, float);
	CDiem(const CDiem&);
	void Dshow();
	CDiem& operator=(const CDiem&);
};

