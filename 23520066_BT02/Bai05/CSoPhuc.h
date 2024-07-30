#pragma once
#include <iostream>
using namespace std;

class CSoPhuc
{
private:
    int Thuc;
    int Ao;
public:
    void Nhap();
    CSoPhuc Tong(CSoPhuc v);
    CSoPhuc Hieu(CSoPhuc v);
    CSoPhuc Tich(CSoPhuc v);
    void Xuat();
};

