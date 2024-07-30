#include <iostream>
using namespace std;
#include "CPhanSo.h"

int main()
{
    CPhanSo a, b, kq;
    cout << "Nhap phan so thu nhat: " << endl;
    a.Nhap();
    cout << "Nhap phan so thu hai: " << endl;
    b.Nhap();
    cout << "Tong cua 2 phan so la: " << endl;
    kq = a.Tong(b);
    kq.Xuat();
    cout << "Hieu cua 2 phan so la: " << endl;
    kq = a.Hieu(b);
    kq.Xuat();
    cout << "Tich cua 2 phan so la: " << endl;
    kq = a.Tich(b);
    kq.Xuat();
    cout << "Thuong cua 2 phan so la: " << endl;
    kq = a.Thuong(b);
    kq.Xuat();
}