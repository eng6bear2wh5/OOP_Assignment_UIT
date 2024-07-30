#include <iostream>
using namespace std;
#include "CDiem.h"

int main()
{
	CDiem A;
	CDiem B(3, 4);
	A = B;
	A.Dshow();
	return 1;
}