#include "CDuongTron.h"
#include "CDiem.h"

istream& operator>>(istream& is, CDuongTron& a)
{
	cout << "Moi nhap tam duong tron: ";
	is >> a.O;
	cout << endl;
	cout << "Moi nhap duong kinh duong tron: ";
	is >> a.R;
	return is;

}

ostream& operator <<(ostream& os, CDuongTron a)
{
	cout << "Tam duong tron la: ";
	os << a.O;
	cout << "Ban kinh duong tron la: ";
	os << a.R;
	return os;
}