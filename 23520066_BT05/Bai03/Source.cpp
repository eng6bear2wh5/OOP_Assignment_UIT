#include <iostream>
using namespace std;
#include "CPhanSo.h"

int main()
{
	CPhanSo A;
	CPhanSo B(1, 2);
	A = B;
	A.PSshow();
	return 1;
}