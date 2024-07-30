#pragma once
#include <iostream>
using namespace std;

class CDuongThang
{
private:
	float a;
	float b;
public:
	friend istream& operator >> (istream&, CDuongThang&);
	friend ostream& operator << (ostream&, CDuongThang);
	int operator == (const CDuongThang&);
	int operator != (const CDuongThang&);
};

