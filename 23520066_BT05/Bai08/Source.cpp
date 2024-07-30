#include <iostream>
using namespace std;
#include"CDonThuc.h"

int main()
{
	CDonThuc A;
	CDonThuc B(2, 3);
	A = B;
	A.DTshow();
	return 1;
}