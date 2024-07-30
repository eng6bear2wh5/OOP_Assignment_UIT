#include <iostream>
using namespace std;
#include "CDonThuc.h"

int main()
{
	CDonThuc A, B;
	cout << "Moi nhap don thuc thu nhat: " << endl;
	cin >> A;
	cout << "Don thuc thu nhat la: ";
	cout << A;
	cout << "Moi nhap don thuc thu hai: " << endl;
	cin >> B;
	cout << "Don thuc thu hai la: ";
	cout << B;
	if (A == B)
		cout << "Don thuc thu nhat giong don thuc thu hai";
	if (A != B)
		cout << "Don thuc thu nhat khong giong don thuc thu hai";
	return 1;
}