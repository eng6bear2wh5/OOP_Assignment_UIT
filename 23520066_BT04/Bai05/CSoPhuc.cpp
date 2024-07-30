#include "CSoPhuc.h"
#include <iostream>
using namespace std;

CSoPhuc::CSoPhuc()
{
	thuc = 1;
	ao = 1;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}

CSoPhuc::CSoPhuc(float Tthuc, float Aao)
{
	thuc = Tthuc;
	ao = Aao;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}

CSoPhuc::CSoPhuc(const CSoPhuc& a)
{
	thuc = a.thuc;
	ao = a.ao;
	cout << "Phuong thuc thiet lap sao chep thong tin" << endl;
}

CSoPhuc::~CSoPhuc()
{
	cout << "Phuong thuc pha huy";
}