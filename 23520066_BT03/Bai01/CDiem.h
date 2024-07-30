#pragma once
#include <iostream>
using namespace std;

class CDiem
{
private:
	float x;
	float y;
public:
	friend istream& operator>>(istream&, CDiem&);
	friend ostream& operator<<(ostream&, CDiem);
};

