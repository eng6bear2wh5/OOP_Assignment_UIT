#include <iostream>
using namespace std;
#include "CTamGiac.h"
#include "CDiem.h"

int main()
{
	CTamGiac ABC;
	CTamGiac DEF(1, 2, 3, 4, 5, 6);
	ABC = DEF;
	DEF.TGshow();
	return 1;
}