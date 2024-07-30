#pragma once
#include <iostream>
using namespace std;
#include "CDonThuc.h"

class CDonThuc
{
private:
	float HeSo;
	float SoMu;
public:
	friend istream& operator>>(istream&, CDonThuc&);
	friend ostream& operator<<(ostream&, CDonThuc&);
	CDonThuc operator*(CDonThuc);
	CDonThuc operator/(CDonThuc);
	CDonThuc operator*=(CDonThuc);
	CDonThuc operator/=(CDonThuc);
};

