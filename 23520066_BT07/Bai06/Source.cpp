#include <iostream>	
using namespace std;
#include "CDuongTron.h"

int main()
{
	CDuongTron O1, O2;
	cout << "Moi nhap duong tron thu nhat: " << endl;
	cin >> O1;
	cout << "duong tron thu nhat la: ";
	cout << O1;
	cout << "Moi nhap duong tron thu hai: " << endl;
	cin >> O2;
	cout << "duong tron thu hai la: ";
	cout << O2;
	if (O1 == O2)
		cout << "duong tron thu nhat bang duong tron thu hai";
	if (O1 != O2)
		cout << "duong tron thu nhat khong bang duong tron thu hai";
	if (O1 > O2)
		cout << "duong tron thu nhat lon hon duong tron thu hai";
	if (O1 >= O2)
		cout << "duong tron thu nhat lon hon hoac bang duong tron thu hai";
	if (O1 < O2)
		cout << "duong tron thu nhat nho hon duong tron thu hai";
	if (O1 <= O2)
		cout << "duong tron thu nhat nho hon hoac bang duong tron thu hai";
	return 1;
}