#include "CSoPhuc.h"

istream& operator >> (istream& is, CSoPhuc& a)
{
	cout << "Moi nhap phan thuc cua so phuc: ";
	is >> a.thuc;
	cout << "Moi nhap phan ao cua so phuc: ";
	is >> a.ao;
	return is;
}

ostream& operator << (ostream& os, CSoPhuc a)
{
	os << a.thuc << " + i" << a.ao << endl;
	return os;
}

float CSoPhuc::Modun()
{
	return sqrt(thuc * thuc + ao * ao);
}

int CSoPhuc::operator == (CSoPhuc& a)
{
	float TEMP1 = this->Modun();
	float TEMP2 = a.Modun();
	if (TEMP1 == TEMP2)
		return 1;
	return 0;
}

int CSoPhuc::operator != (CSoPhuc& a)
{
	float TEMP1 = this->Modun();
	float TEMP2 = a.Modun();
	if (TEMP1 != TEMP2)
		return 1;
	return 0;
}

int CSoPhuc::operator > (CSoPhuc& a)
{
	float TEMP1 = this->Modun();
	float TEMP2 = a.Modun();
	if (TEMP1 > TEMP2)
		return 1;
	return 0;
}

int CSoPhuc::operator >= (CSoPhuc& a)
{
	float TEMP1 = this->Modun();
	float TEMP2 = a.Modun();
	if (TEMP1 >= TEMP2)
		return 1;
	return 0;
}

int CSoPhuc::operator < (CSoPhuc& a)
{
	float TEMP1 = this->Modun();
	float TEMP2 = a.Modun();
	if (TEMP1 < TEMP2)
		return 1;
	return 0;
}

int CSoPhuc::operator <= (CSoPhuc& a)
{
	float TEMP1 = this->Modun();
	float TEMP2 = a.Modun();
	if (TEMP1 <= TEMP2)
		return 1;
	return 0;
}