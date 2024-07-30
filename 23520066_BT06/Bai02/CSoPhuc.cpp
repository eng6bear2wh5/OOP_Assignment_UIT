#include "CSoPhuc.h"

istream& operator>>(istream& is, CSoPhuc& a)
{
	cout << "Moi nhap phan thuc: ";
	cin >> a.thuc;
	cout << "Moi nhap phan ao: ";
	cin >> a.ao;
	return is;
}

ostream& operator<<(ostream& os, CSoPhuc& a)
{
	os << a.thuc;
	if (a.ao >= 0)
		os << "+";
	os << a.ao;
	os << "i";
	return os;
}

CSoPhuc CSoPhuc::operator+(CSoPhuc b)
{
	CSoPhuc temp;
	temp.thuc = thuc + b.thuc;
	temp.ao = ao + b.ao;
	return temp;
}

CSoPhuc CSoPhuc::operator-(CSoPhuc b)
{
	CSoPhuc temp;
	temp.thuc = thuc - b.thuc;
	temp.ao = ao - b.ao;
	return temp;
}

CSoPhuc CSoPhuc::operator*(CSoPhuc b)
{
	CSoPhuc temp;
	temp.thuc = thuc * b.thuc - ao * b.ao;
	temp.ao = thuc * b.ao + ao * b.thuc;
	return temp;
}

CSoPhuc CSoPhuc::operator/(CSoPhuc b)
{
	CSoPhuc temp;
	temp.thuc = (thuc * b.thuc - ao * b.ao) / (thuc * thuc + ao * ao);
	temp.ao = (thuc * b.ao + ao * b.thuc) / (thuc * thuc + ao * ao);
	return temp;
}

CSoPhuc CSoPhuc::operator+=(CSoPhuc b)
{
	CSoPhuc temp;
	temp.thuc = thuc + b.thuc;
	temp.ao = ao + b.ao;
	*this = temp;
	return *this;
}

CSoPhuc CSoPhuc::operator-=(CSoPhuc b)
{
	CSoPhuc temp;
	temp.thuc = thuc - b.thuc;
	temp.ao = ao - b.ao;
	*this = temp;
	return *this;
}

CSoPhuc CSoPhuc::operator*=(CSoPhuc b)
{
	CSoPhuc temp;
	temp.thuc = thuc * b.thuc - ao * b.ao;
	temp.ao = thuc * b.ao + ao * b.thuc;
	*this = temp;
	return *this;
}

CSoPhuc CSoPhuc::operator/=(CSoPhuc b)
{
	CSoPhuc temp;
	temp.thuc = (thuc * b.thuc - ao * b.ao) / (thuc * thuc + ao * ao);
	temp.ao = (thuc * b.ao + ao * b.thuc) / (thuc * thuc + ao * ao);
	*this = temp;
	return *this;
}