#pragma once
#include <iostream>
using namespace std;
#include "CDuongThang.h"

class CDuongThang
{
private:
	int a;
	int b;
public:
	CDuongThang();
	CDuongThang(int, int);
	CDuongThang(const CDuongThang&);
	void DTshow();
	CDuongThang& operator=(const CDuongThang&);
};

