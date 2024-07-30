#pragma once
#include <iostream>
using namespace std;
#include "CSoPhuc.h"

class CSoPhuc
{
private:
	float thuc;
	float ao;
public:
	CSoPhuc();
	CSoPhuc(float, float);
	CSoPhuc(const CSoPhuc&);
	void SPshow();
	CSoPhuc& operator=(const CSoPhuc&);
};

