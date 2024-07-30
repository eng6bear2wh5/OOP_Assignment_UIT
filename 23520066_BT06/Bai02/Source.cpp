#include <iostream>
using namespace std;
#include "CSoPhuc.h"

int main()
{
	CSoPhuc A, B;
	cout << "Moi nhap so phuc thu nhat: " << endl;
	cin >> A;
	cout << "Moi nhap so phuc thu hai: " << endl;
	cin >> B;
	CSoPhuc Cong = A + B;
	cout << "\nKet qua phep cong 2 so phuc la: ";
	cout << Cong << endl;
	CSoPhuc Tru = A - B;
	cout << "\nKet qua phep tru 2 so phuc la: ";
	cout << Tru << endl;
	CSoPhuc Nhan = A * B;
	cout << "\nKet qua phep nhan 2 so phuc la: ";
	cout << Nhan << endl;
	CSoPhuc Chia = A / B;
	cout << "\nKet qua phep chia 2 so phuc la: ";
	cout << Chia << endl;
    CSoPhuc CongBang = A;
	CongBang += B;
	cout << "\nKet qua phep cong bang 2 so phuc la: ";
	cout << CongBang << endl;
	CSoPhuc TruBang = A;
	TruBang -= B;
	cout << "\nKet qua phep tru bang 2 so phuc la: ";
	cout << TruBang << endl;
	CSoPhuc NhanBang = A;
	NhanBang *= B;
	cout << "\nKet qua phep nhan bang 2 so phuc la: ";
	cout << NhanBang << endl;
	CSoPhuc ChiaBang = A;
	ChiaBang /= B;
	cout << "\nKet qua phep chia bang 2 so phuc la: ";
	cout << ChiaBang << endl;
	return 1;
}