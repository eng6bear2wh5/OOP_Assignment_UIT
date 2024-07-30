#include <iostream>
using namespace std;
#include "CDiem.h"
#include "CHinhCau.h"

int main()
{
	CHinhCau O1, O2;
	cout << "Moi nhap hinh cau thu nhat: " << endl;
	cin >> O1;
	cout << "Hinh cau thu nhat la: ";
	cout << O1;
	cout << "Moi nhap hinh cau thu hai: " << endl;
	cin >> O2;
	cout << "Hinh cau thu hai la: ";
	cout << O2;
	if (O1 == O2)
		cout << "Hinh cau thu nhat giong hinh cau thu hai";
	if (O1 != O2)
		cout << "Hinh cau thu nhat khong giong bang hinh cau thu hai";
	return 1;
}