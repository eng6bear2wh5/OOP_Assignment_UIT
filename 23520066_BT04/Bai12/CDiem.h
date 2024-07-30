#pragma once
#include <iostream>
using namespace std;

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
	~CDiem();
};

