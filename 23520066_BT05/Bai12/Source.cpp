#include <iostream>
using namespace std;
#include "CDiem.h"
#include "CHinhCau.h"

int main()
{
	CHinhCau O1; 
	CHinhCau O2 (1, 2, 3, 4);
	O1 = O2;
	O1.HCshow();
	return 1;
}