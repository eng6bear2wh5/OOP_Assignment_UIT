#include <iostream>
using namespace std;
#include "CSoPhuc.h"

int main()
{
	CSoPhuc A;
	CSoPhuc B(3, 4);
	A = B;
	A.SPshow();
	return 1;
}