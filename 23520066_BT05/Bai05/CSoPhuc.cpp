#include "CSoPhuc.h"

CSoPhuc& CSoPhuc::operator=(const CSoPhuc& a)
{
	thuc = a.thuc;
	ao = a.ao;
	return *this;
}

CSoPhuc::CSoPhuc()
{
	thuc = 5;
	ao = 7;
}

CSoPhuc::CSoPhuc(float Tthuc, float Aao)
{
	thuc = Tthuc;
	ao = Aao;
}

CSoPhuc::CSoPhuc(const CSoPhuc& a)
{
	thuc = a.thuc;
	ao = a.ao;
}

void CSoPhuc::SPshow()
{
	cout << thuc;
	if (ao >= 0)
		cout << "+";
	cout << ao;
	cout << "i";
}