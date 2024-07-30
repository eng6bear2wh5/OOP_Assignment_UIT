#pragma once
#include <iostream>
using namespace std;
#include "CSoPhuc.h"

class CSoPhuc
{
private:
	float thuc;
	float ao;
public:
	friend istream& operator>>(istream&, CSoPhuc&);
	friend ostream& operator<<(ostream&, CSoPhuc&);
	CSoPhuc operator+(CSoPhuc);
	CSoPhuc operator-(CSoPhuc);
	CSoPhuc operator*(CSoPhuc);
	CSoPhuc operator/(CSoPhuc);
	CSoPhuc operator+=(CSoPhuc);
	CSoPhuc operator-=(CSoPhuc);
	CSoPhuc operator*=(CSoPhuc);
	CSoPhuc operator/=(CSoPhuc);
};

