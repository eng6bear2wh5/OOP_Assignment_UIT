#include <iostream>
using namespace std;
#include "CPhanSo.h"

int main()
{
    CPhanSo a, b;
    cout << "Moi nhap phan so thu nhat: " << endl;
    a.Nhap();
    cout << "Moi nhap phan so thu hai: " << endl;
    b.Nhap();
    cout << "Phan so lon hon la: " << endl;
    int kq = a.SoSanh(b);
    if (kq >= 0) {
        a.Xuat();
    }
    else {
        b.Xuat();
    }
    return 1;
}