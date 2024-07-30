#include <iostream>
using namespace std;
#include "CDiem.h"

int main()
{
	CDiem A, B;
	cout << "Moi nhap toa do diem thu nhat: " << endl;
	cin >> A;
	cout << "Toa do diem thu nhat la: ";
	cout << A;
	cout << "Moi nhap toa do diem thu hai: " << endl;
	cin >> B;
	cout << "Toa do diem thu nhat la: ";
	cout << B;
	if (A == B)
		cout << "Diem A bang Diem B";
	if (A != B)
		cout << "Diem A khong bang Diem B";
	return 1;
}