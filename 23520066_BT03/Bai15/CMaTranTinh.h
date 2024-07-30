#pragma once
#include <iostream>
#define MAX 100
using namespace std;

class CMaTranTinh
{
private:
	int n;
	int m;
	int A[MAX][MAX];
public:
	friend istream& operator>>(istream&, CMaTranTinh&);
	friend ostream& operator<<(ostream&, CMaTranTinh);
};

