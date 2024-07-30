#include <iostream>
using namespace std;
#include "CDiemKhongGian.h"

int main()
{
	CDiemKhongGian A, B;
	cout << "Toa do diem khong gian thu nhat: "  << endl;
	cin >> A;
	cout << "Toa do diem khong gian thu nhat la: ";
	cout << A;
	cout << "Moi nhap toa do diem khong gian thu hai: " << endl;
	cin >> B;
	cout << "Toa do diem khong gian thu hai la: ";
	cout << B;
	if (A == B)
		cout << "Toa do diem khong gian thu nhat giong toa do diem khong gian thu hai";
	if (A != B)
		cout << "Toa do diem khong gian thu nhat khong giong toa do diem khong gian thu hai";
	return 1;
}