#pragma once
#include <iostream>
using namespace std;

class CDuongThang
{
private:
	float a, b;
public:
	friend istream& operator>>(istream&, CDuongThang&);
	friend ostream& operator<<(ostream&, CDuongThang);
};

