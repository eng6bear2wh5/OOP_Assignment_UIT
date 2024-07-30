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
	cout << "Toa do diem thu hai la: ";
	cout << B;
	if (A == B)
		cout << "\nDiem A va Diem B co khoang cach den goc toa do bang nhau.";
	if (A != B)
		cout << "\nDiem A va Diem B co khoang cach den goc toa do khong bang nhau.";
	if (A > B)
		cout << "\nKhoang cach Diem A den goc toa do lon hon so voi khoang cach tu Diem B den goc toa do.";
	if (A >= B)
		cout << "\nKhoang cach cua Diem A den goc toa do lon hon hoac bang so voi khoang cach tu Diem B den goc toa do.";
	if (A < B)
		cout << "\nKhoang cach cua Diem A den goc toa do be hon so voi khoang cach tu Diem B den goc toa do.";
	if (A <= B)
		cout << "\nKhoang cach cua Diem A den goc toa do be hon hoac bang so voi khoang cach tu Diem B den goc toa do.";
	return 1;
}