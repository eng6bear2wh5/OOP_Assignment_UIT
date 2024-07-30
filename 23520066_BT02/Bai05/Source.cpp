#include <iostream>
using namespace std;
#include "CSoPhuc.h"

int main()
{
    CSoPhuc a, b, kq;
    cout << "Moi nhap so phuc thu nhat: " << endl;
    a.Nhap();
    cout << "Moi nhap so phuc thu hai: " << endl;
    b.Nhap();
    cout << "Tong cua 2 so phuc la: " << endl;
    kq = a.Tong(b);
    kq.Xuat();
    cout << "Hieu cua 2 so phuc la: " << endl;
    kq = a.Hieu(b);
    kq.Xuat();
    cout << "Tich cua 2 so phuc la: " << endl;
    kq = a.Tich(b);
    kq.Xuat();
    return 1;
}