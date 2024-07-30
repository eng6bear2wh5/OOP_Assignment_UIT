#include "CDiem.h"

void CDiem::Nhap() 
{
    cout << "Moi nhap toa do x: " << endl;
    cin >> x;
    cout << "Moi nhap toa do y: " << endl;
    cin >> y;
    cout << "Moi nhap toa do z: " << endl;
    cin >> z;
}

float CDiem::KhoangCach(CDiem P) 
{
    return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y) + (z - P.z) * (z - P.z));
}

void CDiem::Xuat() 
{
    cout << "Toa do x: " << x << endl;
    cout << "Toa do y: " << y << endl;
    cout << "Toa do z: " << z << endl;
}