#include <iostream>
using namespace std;
#include "CHonSo.h"

int main()
{
	CHonSo A;
	CHonSo B(3, 4, 5);
	A = B;
	A.HSshow();
	return 1;
}