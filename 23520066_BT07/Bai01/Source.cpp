#include <iostream>
using namespace std;
#include "CPhanSo.h"

int main()
{
	CPhanSo A, B;
	cout << "Moi nhap phan so thu nhat: " << endl;
	cin >> A;
	cout << "Phan so thu nhat la: ";
	cout << A;
	cout << "\nMoi nhap phan so thu hai: " << endl;
	cin >> B;
	cout << "Phan so thu hai la: ";
	cout << B;
	if (A == B)
		cout << "\nPhan so A bang phan so B";
	if (A != B)
		cout << "\nPhan so A khong bang phan so B";
	if (A > B)
		cout << "\nPhan so A lon hon phan so B";
	if (A >= B)
		cout << "\nPhan so A lon hon hoac bang phan so B";
	if (A < B)
		cout << "\nPhan so A be hon phan so B";
	if (A <= B)
		cout << "\nPhan so A be hon hoac bang phan so B";
	return 1;
}