#include <iostream>
using namespace std;

struct SoPhuc 
{
    int thuc;
    int ao;
};

void Nhap(SoPhuc& a);
void Xuat(SoPhuc a);
SoPhuc Tong(SoPhuc a, SoPhuc b);
SoPhuc Hieu(SoPhuc a, SoPhuc b);
SoPhuc Tich(SoPhuc a, SoPhuc b);

int main()
{
    SoPhuc a, b;
    SoPhuc ketqua;
    cout << "Moi nhap so phuc thu nhat: " << endl;
    Nhap(a);
    cout << "Moi nhap so phuc thu hai: " << endl;
    Nhap(b);
    ketqua = Tong(a, b);
    cout << "Tong cua 2 so phuc la: \n";
    Xuat(ketqua);
    ketqua = Hieu(a, b);
    cout << "Hieu cua 2 so phuc la: \n";
    Xuat(ketqua);
    ketqua = Tich(a, b);
    cout << "Tich cua 2 so phuc la: \n";
    Xuat(ketqua);
}

void Nhap(SoPhuc& a) 
{
    cout << "Moi nhap so thuc: " << endl;
    cin >> a.thuc;
    cout << "Moi nhap so ao: " << endl;
    cin >> a.ao;
}

SoPhuc Tong(SoPhuc a, SoPhuc b) 
{
    SoPhuc temp;
    temp.thuc = a.thuc + b.thuc;
    temp.ao = a.ao + b.ao;
    return temp;
}

SoPhuc Hieu(SoPhuc a, SoPhuc b) 
{
    SoPhuc temp;
    temp.thuc = a.thuc - b.thuc;
    temp.ao = a.ao - b.ao;
    return temp;
}

SoPhuc Tich(SoPhuc a, SoPhuc b) 
{
    SoPhuc temp;
    temp.thuc = a.thuc * b.thuc - a.ao * b.ao;
    temp.ao = a.thuc * b.ao + a.ao * b.thuc;
    return temp;
}

void Xuat(SoPhuc a) 
{
    cout << "Thuc = " << a.thuc << endl;
    cout << "Ao = " << a.ao << endl;
}