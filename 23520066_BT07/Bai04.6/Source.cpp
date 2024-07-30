#include <iostream>
using namespace std;
#include "CDuongThang.h"

int main()
{
	CDuongThang A, B;
	cout << "Moi nhap duong thang thu nhat: " << endl;
	cin >> A;
	cout << "Duong thang thu nhat la: ";
	cout << A;
	cout << "Moi nhap duong thang thu hai: " << endl;
	cin >> B;
	cout << "Duong thang thu hai la: ";
	cout << B;
	if (A == B)
		cout << "Duong thang thu nhat giong duong thang thu hai";
	if (A != B)
		cout << "Duong thang thu nhat khong giong bang duong thang thu hai";
	return 1;
}