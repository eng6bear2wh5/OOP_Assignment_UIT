#pragma once
#include <iostream>
using namespace std;
#include "CDaThuc.h"

class CDaThuc
{
private:
	int n;
	float a[100];
public:
	friend istream& operator>>(istream&, CDaThuc&);
	friend ostream& operator<<(ostream&, CDaThuc);
	int LonNhat(int, int);
	void RutGon();
	CDaThuc operator+(CDaThuc&);
	CDaThuc operator-(CDaThuc&);
	CDaThuc operator*(CDaThuc&);
	CDaThuc operator/(CDaThuc&);
	CDaThuc operator+=(CDaThuc&);
	CDaThuc operator-=(CDaThuc&);
	CDaThuc operator*=(CDaThuc&);
	CDaThuc operator/=(CDaThuc&);
};

