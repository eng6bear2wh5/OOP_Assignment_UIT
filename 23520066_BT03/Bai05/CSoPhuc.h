#pragma once
#include <iostream>
using namespace std;

class CSoPhuc
{
private:
	float thuc;
	float ao;
public:
	friend istream& operator>>(istream& is, CSoPhuc& x);
	friend ostream& operator<<(ostream& os, CSoPhuc x);
};

