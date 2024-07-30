#include <iostream>
using namespace std;
#include "CNgay.h"

int main()
{
	CNgay A, B;
	cout << "Moi nhap ngay thang nam thu nhat: " << endl;
	cin >> A;
	cout << "Ngay thang nam thu nhat la: ";
	cout << A;
	cout << "Moi nhap ngay thang nam thu hai: " << endl;
	cin >> B;
	cout << "Ngay thang nam thu hai la: ";
	cout << B;
	if (A == B)
		cout << "Ngay thang nam thu nhat giong ngay thang nam thu hai";
	if (A != B)
		cout << "Ngay thang nam thu nhat khong giong ngay thang nam thu hai";
	return 1;
}