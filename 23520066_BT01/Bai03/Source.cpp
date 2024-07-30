#include <iostream>
using namespace std;

struct PhanSo 
{
    int TuSo;
    int MauSo;
};

void Nhap(PhanSo& a);
int SoSanh(PhanSo a, PhanSo b);
void Xuat(PhanSo a);

int main()
{
    PhanSo a, b;
    cout << "Moi nhap phan so thu nhat: " << endl;
    Nhap(a);
    cout << "Moi nhap phan so thu hai: " << endl;
    Nhap(b);
    int ketqua = SoSanh(a, b);
    cout << "Phan so lon nhat la: " << endl;
    if (ketqua >= 0) {
        Xuat(a);
    }
    else {
        Xuat(b);
    }
    return 1;
}

void Nhap(PhanSo& a) 
{
    cout << "Moi nhap tu so: " << endl;
    cin >> a.TuSo;
    cout << "Moi nhap mau so: " << endl;
    cin >> a.MauSo;
}

int SoSanh(PhanSo a, PhanSo b) 
{
    int c = a.TuSo / a.MauSo;
    int d = b.TuSo / a.MauSo;
    if (c > d)
        return 1;
    if (d > c)
        return -1;
    else
        return 0;
}

void Xuat(PhanSo a) 
{
    cout << "\n Tu: " << a.TuSo;
    cout << "\n Mau: " << a.MauSo;

}