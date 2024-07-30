#pragma once
#include <iostream>
using namespace std;

class CDaThucDong
{
private:
	int n;
	float* A;
public:
	friend istream& operator>>(istream&, CDaThucDong&);
	friend ostream& operator<<(ostream&, CDaThucDong);
};

