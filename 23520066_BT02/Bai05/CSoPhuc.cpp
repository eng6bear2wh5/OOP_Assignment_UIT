#include "CSoPhuc.h"

void CSoPhuc::Nhap() 
{
    cout << "Moi nhap so thuc: " << endl;
    cin >> Thuc;
    cout << "Moi nhap so ao: " << endl;
    cin >> Ao;
}

CSoPhuc CSoPhuc::Tong(CSoPhuc v) 
{
    CSoPhuc temp;
    temp.Thuc = Thuc + v.Thuc;
    temp.Ao = Ao + v.Thuc;
    return temp;
}

CSoPhuc CSoPhuc::Hieu(CSoPhuc v) 
{
    CSoPhuc temp;
    temp.Thuc = Thuc - v.Thuc;
    temp.Ao = Ao - v.Thuc;
    return temp;
}

CSoPhuc CSoPhuc::Tich(CSoPhuc v) 
{
    CSoPhuc temp;
    temp.Thuc = Thuc * v.Thuc + Ao * v.Ao;
    temp.Ao = Thuc * v.Ao + Ao * v.Thuc;
    return temp;
}

void CSoPhuc::Xuat() 
{
    cout << "Phan thuc cua so phuc la: " << Thuc << endl;
    cout << "Phan ao cua so phuc la: " << Ao << endl;

}