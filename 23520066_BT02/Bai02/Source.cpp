#include <iostream>
using namespace std;
#include "CDiem.h"

int main()
{
    CDiem a, b;
    cout << "moi nhap toa do diem trong khong gian cua diem dau tien: " << endl;
    a.Nhap();
    cout << "moi nhap toa do diem trong khong gian cua diem thu hai: " << endl;
    b.Nhap();
    float kq = b.KhoangCach(a);
    cout << "Khoang cach giua 2 diem la: " << kq << endl;
    a.Xuat();
    b.Xuat();
}