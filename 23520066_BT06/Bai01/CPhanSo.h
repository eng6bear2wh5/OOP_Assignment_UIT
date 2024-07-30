#pragma once
#include <iostream>
using namespace std;
#include "CPhanSo.h"

class CPhanSo
{
private:
	int tu;
	int mau;
public:
	friend istream& operator>>(istream&, CPhanSo&);
	friend ostream& operator<<(ostream&, CPhanSo&);
	CPhanSo operator+(CPhanSo);
	CPhanSo operator-(CPhanSo);
	CPhanSo operator*(CPhanSo);
	CPhanSo operator/(CPhanSo);
	CPhanSo operator+=(CPhanSo);
	CPhanSo operator-=(CPhanSo);
	CPhanSo operator*=(CPhanSo);
	CPhanSo operator/=(CPhanSo);
	CPhanSo& operator++();
	CPhanSo& operator++(int);
	CPhanSo& operator--();
	CPhanSo& operator--(int);
};