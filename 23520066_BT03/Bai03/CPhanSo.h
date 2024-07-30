#pragma once
#include <iostream>
using namespace std;

class CPhanSo
{
private:
	int tu;
	int mau;
public:
	friend istream& operator>>(istream&, CPhanSo&);
	friend ostream& operator<<(ostream&, CPhanSo);
};

