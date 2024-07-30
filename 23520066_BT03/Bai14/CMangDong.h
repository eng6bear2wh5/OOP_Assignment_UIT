#pragma once
#include <iostream>
using namespace std;

class CMangDong
{
private:
	int n;
	float* A;
public:
	friend istream& operator>>(istream&, CMangDong&);
	friend ostream& operator<<(ostream&, CMangDong);
};

