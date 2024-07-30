#include <iostream>
using namespace std;
#include "CDuongThang.h"

int main()
{
	CDuongThang A;
	CDuongThang B(5, 6);
	A = B;
	A.DTshow();
	return 1;
}
