#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
	float x;
	float y;
	float z;
public:
	friend istream& operator >> (istream&, CDiemKhongGian&);
	friend ostream& operator << (ostream&, CDiemKhongGian);
	int operator == (const CDiemKhongGian&);
	int operator != (const CDiemKhongGian&);
};

