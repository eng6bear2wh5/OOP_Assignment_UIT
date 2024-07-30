#include <iostream>
using namespace std;
#include "CDaThuc.h"

int main()
{
	CDaThuc A, B;
	cout << "Moi nhap da thuc thu nhat: ";
	cin >> A;
	cout << "Da thuc thu nhat: ";
	cout << A;
	cout << "Moi nhap da thuc thu hai: ";
	cin >> B;
	cout << "Da thuc thu hai: ";
	cout << B;

	CDaThuc Cong = A + B;
	cout << "\nKet qua phep cong 2 da thuc la: ";
	cout << Cong;

	CDaThuc Tru = A - B;
	cout << "\nKet qua phep tru 2 da thuc la: ";
	cout << Tru;

	CDaThuc Nhan = A * B;
	cout << "\nKet qua phep nhan 2 da thuc la: ";
	cout << Nhan;

	CDaThuc Chia = A / B;
	cout << "\nKet qua phep chia 2 so da thuc la: ";
	cout << Chia ;


	CDaThuc CongBang = A;
	CongBang += B;
	cout << "\nKet qua phep cong bang 2 da thuc la: ";
	cout << CongBang;

	CDaThuc TruBang = A;
	TruBang -= B;
	cout << "\nKet qua phep tru bang 2 da thuc la: ";
	cout << TruBang;

	CDaThuc NhanBang = A;
	NhanBang *= B;
	cout << "\nKet qua phep nhan bang 2 da thuc la: ";
	cout << NhanBang;

	CDaThuc ChiaBang = A;
	ChiaBang /= B;
	cout << "\nKet qua phep chia bang 2 da thuc la: ";
	cout << ChiaBang ;
	return 1;

}
