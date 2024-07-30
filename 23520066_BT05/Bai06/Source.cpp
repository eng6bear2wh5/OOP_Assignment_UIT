#include <iostream>
using namespace std;
#include "CNgay.h"

int main()
{
	CNgay A;
	CNgay B(14, 10, 2005);
	A = B;
	A.Nshow();
	return 1;
}