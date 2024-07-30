#pragma once
#include <iostream>
using namespace std;

class CHonSo
{
private:
	int nguyen;
	int tu;
	int mau;
public:
	friend istream& operator>>(istream&, CHonSo& x);
	friend ostream& operator<<(ostream&, CHonSo x);
};

