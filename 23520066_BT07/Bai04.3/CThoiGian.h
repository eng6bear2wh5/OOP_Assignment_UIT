#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
	int gio;
	int phut;
	int giay;
public:
	friend istream& operator >> (istream&, CThoiGian&);
	friend ostream& operator << (ostream&, CThoiGian);
	int operator == (const CThoiGian&);
	int operator != (const CThoiGian&);
};

