#pragma once
#include <iostream>
using namespace std;
#include "CDonThuc.h"

class CDonThuc
{
private:
	int HeSo;
	int SoMu;
public:
	CDonThuc();
	CDonThuc(int, int);
	CDonThuc(const CDonThuc&);
	void DTshow();
	CDonThuc& operator=(const CDonThuc&);
};

