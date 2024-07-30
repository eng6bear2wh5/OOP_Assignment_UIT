#include "CPhanSo.h"

void CPhanSo::Nhap() 
{
    cout << "Moi nhap tu so cua phan so: " << endl;
    cin >> Tu;
    cout << "Moi nhap mau so cua phan so: " << endl;
    cin >> Mau;
}

CPhanSo CPhanSo::Tong(CPhanSo c) 
{
    CPhanSo temp;
    temp.Tu = Tu * c.Mau + Mau * c.Tu;
    temp.Mau = Mau * c.Mau;
    return temp;
}

CPhanSo CPhanSo::Hieu(CPhanSo c) 
{
    CPhanSo temp;
    temp.Tu = Tu * c.Mau - Mau * c.Tu;
    temp.Mau = Mau * c.Mau;
    return temp;
}

CPhanSo CPhanSo::Tich(CPhanSo c) 
{
    CPhanSo temp;
    temp.Tu = Tu * c.Tu;
    temp.Mau = Mau * c.Mau;
    return temp;
}

CPhanSo CPhanSo::Thuong(CPhanSo c) 
{
    CPhanSo temp;
    temp.Tu = Tu * c.Mau;
    temp.Mau = Mau * c.Tu;
    return temp;
}

void CPhanSo::Xuat() 
{
    cout << "Tu so cua phan so: " << Tu << endl;
    cout << "Mau so cua phan so: " << Mau << endl;

}
