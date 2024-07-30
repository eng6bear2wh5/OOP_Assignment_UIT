#pragma once
#include <iostream>
using namespace std;

class CMaTranDong
{
private:
	int n;
	int m;
	float** A;
public:
	friend istream& operator>>(istream&, CMaTranDong&);
	friend ostream& operator<<(ostream&, CMaTranDong);
};

