#include "CPhanSo.h"

void CPhanSo::Nhap() 
{
    cout << "Moi nhap tu so: " << endl;
    cin >> Tu;
    cout << "Moi nhap mau so: " << endl;
    cin >> Mau;
}

int CPhanSo::SoSanh(CPhanSo p) 
{
    float a = (float)Tu / Mau;
    float b = (float)p.Tu / p.Mau;
    if (a > b) {
        return 1;
    }
    if (a < b) {
        return -1;
    }
    return 0;
}

void CPhanSo::Xuat() 
{
    cout << "Tu so cua phan so vua nhap la: " << Tu << endl;
    cout << "Mau so cua phan so vua nhap la: " << Mau << endl;

}
