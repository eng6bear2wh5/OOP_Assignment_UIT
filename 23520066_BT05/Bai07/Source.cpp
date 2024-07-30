#pragma once
#include <iostream>
using namespace std;
#include "CThoiGian.h"

int main()
{
	CThoiGian clk1;
	CThoiGian clk2(9, 30, 30);
	clk1 = clk2;
	clk1.TGshow();
	return 1;
}