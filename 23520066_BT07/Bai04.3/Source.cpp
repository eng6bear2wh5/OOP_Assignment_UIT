#include <iostream>
using namespace std;
#include "CThoiGian.h"

int main()
{
	CThoiGian A, B;
	cout << "Moi nhap thoi gian thu nhat: " << endl;
	cin >> A;
	cout << "Thoi gian thu nhat la: ";
	cout << A;
	cout << "Moi nhap thoi gian thu hai: " << endl;
	cin >> B;
	cout << "Thoi gian thu hai la: ";
	cout << B;
	if (A == B)
		cout << "Thoi gian thu nhat giong thoi gianthu hai";
	if (A != B)
		cout << "Thoi gian thu nhat khong giong thoi gian thu hai";
	return 1;
}