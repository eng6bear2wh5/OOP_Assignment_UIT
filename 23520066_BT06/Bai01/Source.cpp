#include <iostream>
using namespace std;
#include "CPhanSo.h"

int main()
{
	CPhanSo A, B;
	cout << "Moi nhap phan so thu nhat: " << endl;
	cin >> A;
	cout << "Moi nhap phan so thu hai: " << endl;
	cin >> B;
	CPhanSo Cong = A + B;
	cout << "\nKet qua phep cong 2 phan so la: ";
	cout << Cong << endl;
	CPhanSo Tru = A - B;
	cout << "\nKet qua phep tru hai phan so la: ";
	cout << Tru << endl;
	CPhanSo Nhan = A * B;
	cout << "\nKet qua phep nhan 2 phan so la: ";
	cout << Nhan << endl;
	CPhanSo Chia = A / B;
	cout << "\nKet qua phep chia 2 phan so la: ";
	cout << Chia << endl;
	CPhanSo CongBang = A;
	CongBang += B;
	cout << "\nKet qua phep cong bang 2 phan so la: ";
	cout << CongBang << endl;
	CPhanSo TruBang = A;
	TruBang -= B;
	cout << "\nKet qua phep tru bang 2 phan so la: ";
	cout << TruBang << endl;
	CPhanSo NhanBang = A;
	NhanBang *= B;
	cout << "\nKet qua phep nhan bang 2 phan so la: ";
	cout << NhanBang << endl;
	CPhanSo ChiaBang = A;
	ChiaBang /= B;
	cout << "\nKet qua phep chia bang 2 phan so la: ";
	cout << ChiaBang << endl;
	CPhanSo CongCongPrefix = A;
	++CongCongPrefix;
	cout << "\n Phan so sau khi thuc hien toan tu cong cong tien to la: ";
	cout << CongCongPrefix;
	CPhanSo CongCongPostfix = A;
	CongCongPostfix++;
	cout << "\n Phan so sau khi thuc hien toan tu cong cong hau to la: ";
	cout << CongCongPostfix;
	CPhanSo TruTruPrefix = A;
	--TruTruPrefix;
	cout << "\n Phan so sau khi thuc hien toan tu tru tru tien to la: ";
	cout << TruTruPrefix;
	CPhanSo TruTruPostfix = A;
	--TruTruPostfix;
	cout << "\n Phan so sau khi thuc hien toan tu tru tru hau to: ";
	cout << TruTruPrefix;
	return 1;
}