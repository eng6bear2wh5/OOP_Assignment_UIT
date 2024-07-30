#pragma once
#include <iostream>
#define MAX 100
using namespace std;

class CMangTinh
{
private:
	int n;
	float A[MAX];
public:
	friend istream& operator>>(istream&, CMangTinh&);
	friend ostream& operator<<(ostream&, CMangTinh);
};

