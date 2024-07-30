#pragma once
#include <iostream>
using namespace std;

class CNgay
{
private:
	int ngay;
	int thang;
	int nam;
public:
	CNgay();
	CNgay(int, int, int);
	CNgay(const CNgay&);
	void Nshow();
	CNgay& operator=(const CNgay&);
};

