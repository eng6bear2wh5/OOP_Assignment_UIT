#pragma once
#include <iostream>
using namespace std;

class CPhanSo
{
private:
    int Tu;
    int Mau;
public:
    void Nhap();
    CPhanSo Tong(CPhanSo c);
    CPhanSo Hieu(CPhanSo c);
    CPhanSo Tich(CPhanSo c);
    CPhanSo Thuong(CPhanSo c);
    void Xuat();
};