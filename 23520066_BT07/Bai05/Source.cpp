#include <iostream>	
using namespace std;
#include "CSoPhuc.h"

int main()
{
	CSoPhuc O1, O2;
	cout << "Moi nhap so phuc thu nhat: " << endl;
	cin >> O1;
	cout << "so phuc thu nhat la: ";
	cout << O1;
	cout << "Moi nhap so phuc thu hai: " << endl;
	cin >> O2;
	cout << "so phuc thu hai la: ";
	cout << O2;
	if (O1 == O2)
		cout << "so phuc thu nhat bang so phuc thu hai";
	if (O1 != O2)
		cout << "so phuc thu nhat khong bang so phuc thu hai";
	if (O1 > O2)
		cout << "so phuc thu nhat lon hon so phuc thu hai";
	if (O1 != O2)
		cout << "so phuc thu nhat lon hon hoac bang so phuc thu hai";
	if (O1 != O2)
		cout << "so phuc thu nhat nho hon so phuc thu hai";
	if (O1 != O2)
		cout << "so phuc thu nhat nho hon hoac bang so phuc thu hai";
	return 1;
}