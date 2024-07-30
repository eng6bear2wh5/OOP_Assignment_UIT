#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
private:
	int gio;
	int phut;
	int giay;
public:
	friend istream& operator>>(istream&, CThoiGian&);
	friend ostream& operator<<(ostream&, CThoiGian);
};

