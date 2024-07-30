#include <iostream>
using namespace std;
#include "CNgay.h"

int main()
{
    CNgay a, kq, temp;
    a.Nhap();
    temp = a;
    cout << "Ngay ban dau la: " << endl;
    a.Xuat();
    kq = a.KeTiep(temp);
    cout << "Ngay ke tiep la: " << endl;
    kq.Xuat();
    return 1;
}