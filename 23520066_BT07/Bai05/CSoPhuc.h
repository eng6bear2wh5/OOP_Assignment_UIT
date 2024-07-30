#pragma once
#include <iostream>
using namespace std;

class CSoPhuc
{
private: 
	float thuc;
	float ao;
public:
	friend istream& operator >> (istream&, CSoPhuc&);
	friend ostream& operator << (ostream&, CSoPhuc);
	float Modun();
	int operator == (CSoPhuc&);
	int operator != (CSoPhuc&);
	int operator > (CSoPhuc&);
	int operator >= (CSoPhuc&);
	int operator < (CSoPhuc&);
	int operator <= (CSoPhuc&);
};

