#include <iostream>
using namespace std;
#include "CDiem.h"
#include "CTamGiac.h"

int main()
{
	CTamGiac ABC, DEF;
	cout << "Moi nhap tam giac thu nhat: " << endl;
	cin >> ABC;
	cout << "Tam giac thu nhat la: " << endl;
	cout << ABC;
	cout << "Moi nhap tam giac thu hai: " << endl;
	cin >> DEF;
	cout << "Tam giac thu hai la: " << endl;
	cout << DEF;
	if (ABC == DEF)
		cout << "Tam giac thu nhat bang tam giac thu hai";
	if (ABC != DEF)
		cout << "Tam giac thu nhat khong bang tam giac thu hai";
	return 1;
}