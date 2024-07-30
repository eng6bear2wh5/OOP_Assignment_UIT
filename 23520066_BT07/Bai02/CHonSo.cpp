#include "CHonSo.h"

istream& operator >> (istream& is, CHonSo& a)
{
	cout << "Moi nhap phan nguyen: ";
	is >> a.nguyen;
	cout << "Moi nhap tu so cua phan so: ";
	is >> a.tu;
	cout << "Moi nhap mau so cua phan so: ";
	is >> a.mau;
	return is;
}

ostream& operator << (ostream& os, CHonSo a)
{
	os << a.nguyen << " va " << a.tu << "/" << a.mau << endl;
	return os;
}

float CHonSo::TinhHonSo()
{
	return ((nguyen * mau + tu) / mau);
}

int CHonSo::operator == (CHonSo& a)
{
	float S1 = this->TinhHonSo();
	float S2 = a.TinhHonSo();
	if (S1 == S2)
		return 1;
	return 0;

}
int CHonSo::operator != (CHonSo& a)
{
	float S1 = this->TinhHonSo();
	float S2 = a.TinhHonSo();
	if (S1 != S2)
		return 1;
	return 0;
}

int CHonSo::operator > (CHonSo& a)
{
	float S1 = this->TinhHonSo();
	float S2 = a.TinhHonSo();
	if (S1 > S2)
		return 1;
	return 0;
}

int CHonSo::operator >= (CHonSo& a)
{
	float S1 = this->TinhHonSo();
	float S2 = a.TinhHonSo();
	if (S1 >= S2)
		return 1;
	return 0;
}

int CHonSo::operator < (CHonSo& a)
{
	float S1 = this->TinhHonSo();
	float S2 = a.TinhHonSo();
	if (S1 < S2)
		return 1;
	return 0;
}

int CHonSo::operator <= (CHonSo& a)
{
	float S1 = this->TinhHonSo();
	float S2 = a.TinhHonSo();
	if (S1 <= S2)
		return 1;
	return 0;
}