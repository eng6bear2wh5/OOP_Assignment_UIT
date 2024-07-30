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
    void Nhap();
    void Xuat();
    CNgay KeTiep(CNgay& temp);
    int NamNhuan();
};

