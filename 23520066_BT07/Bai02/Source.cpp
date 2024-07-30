#include <iostream>	
using namespace std;
#include "CHonSo.h"

int main()
{
	CHonSo O1, O2;
	cout << "Moi nhap hon so thu nhat: " << endl;
	cin >> O1;
	cout << "Hon so thu nhat la: ";
	cout << O1;
	cout << "\nMoi nhap hon so thu hai: " << endl;
	cin >> O2;
	cout << "Hon so thu hai la: ";
	cout << O2;
	if (O1 == O2)
		cout << "\nHon so thu nhat bang hon so thu hai";
	if (O1 != O2)
		cout << "\nHon so thu nhat khong bang hon so thu hai";
	if (O1 > O2)
		cout << "\nHon so thu nhat lon hon hon so thu hai";
	if (O1 >= O2)
		cout << "\nHon so thu nhat lon hon hoac bang hon so thu hai";
	if (O1 < O2)
		cout << "\nHon so thu nhat nho hon hon so thu hai";
	if (O1 <= O2)
		cout << "\nHon so thu nhat nho hon hoac bang hon so thu hai";
	return 1;
}