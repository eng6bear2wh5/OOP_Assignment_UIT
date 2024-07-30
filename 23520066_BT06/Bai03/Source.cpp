#include <iostream>
using namespace std;
#include "CDonThuc.h"	

int main()
{
	CDonThuc A, B;
	cout << "Moi nhap don thuc thu nhat: " << endl;
	cin >> A;
	cout << "Moi nhap don thuc thu hai: " << endl;
	cin >> B;
	CDonThuc Nhan = A * B;
	cout << "\nKet qua phep nhan 2 don thuc la: ";
	cout << Nhan << endl;
	CDonThuc Chia = A / B;
	cout << "\nKet qua phep chia 2 don thuc la: ";
	cout << Chia << endl;
	CDonThuc NhanBang = A;
	NhanBang *= B;
	cout << "\nKet qua phep nhan bang 2 don thuc la: ";
	cout << NhanBang << endl;
	CDonThuc ChiaBang = A;
	ChiaBang /= B;
	cout << "\nKet qua phep chia bang 2 don thuc la: ";
	cout << ChiaBang << endl;
	return 1;
}