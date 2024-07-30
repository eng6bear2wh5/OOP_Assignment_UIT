#pragma once
#include <iostream>
using namespace std;
#include "CHonSo.h"

class CHonSo
{
private:
	int nguyen;
	int tu;
	int mau;
public:
	CHonSo();
	CHonSo(int, int, int);
	CHonSo(const CHonSo&);
	void HSshow();
	CHonSo& operator=(const CHonSo&);
};

