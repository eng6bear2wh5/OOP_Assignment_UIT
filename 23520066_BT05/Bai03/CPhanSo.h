#pragma once
#include <iostream>
using namespace std;

class CPhanSo
{
private:
	int tu;
	int mau;
public:
	CPhanSo();
	CPhanSo(int, int);
	CPhanSo(const CPhanSo&);
	void PSshow();
	CPhanSo& operator=(const CPhanSo&);
};

