#include <iostream>
using namespace std;
#include "CDiem.h"
#include "CDuongTron.h"

int main() {
	CDuongTron A;
	CDuongTron B(1, 2, 3);
	A = B;
	A.DTshow();
	return 1;
}