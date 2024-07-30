#pragma once
#include <iostream>
#define MAX 100
using namespace std;

class CDaThucTinh
{
private:
	int n;
	float A[MAX];
public:
	friend istream& operator>>(istream&, CDaThucTinh&);
	friend ostream& operator<<(ostream&, CDaThucTinh);
};

