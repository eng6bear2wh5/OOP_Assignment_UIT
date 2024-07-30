#include <iostream>
using namespace std;

struct Ngay 
{
    int ngay;
    int thang;
    int nam;
};

void Nhap(Ngay& a);
void Xuat(Ngay a);
Ngay TruocDo(Ngay a);
int NamNhuan(Ngay a);

int main()
{
    Ngay a;
    Nhap(a);
    Ngay kq = TruocDo(a);
    cout << "Ngay hien tai la: " << endl;
    Xuat(a);
    cout << "Ngay truoc do la: " << endl;
    Xuat(kq);
    return 1;
}

void Nhap(Ngay& a) 
{
    cout << "Moi nhap ngay: " << endl;
    cin >> a.ngay;
    cout << "Moi nhap ngay: " << endl;
    cin >> a.thang;
    cout << "Moi nhap ngay: " << endl;
    cin >> a.nam;

}

int NamNhuan(Ngay a) 
{
    if (a.nam % 4 == 0 && a.nam % 100 != 0) {
        return 1;
    }
    if (a.nam % 400 == 0) {
        return 1;
    }
    return 0;
}

void Xuat(Ngay a) 
{
    cout << "Ngay thang nam la: " << a.ngay << "/" << a.thang << "/" << a.nam << endl;
}
Ngay TruocDo(Ngay a) 
{
    int NgayThang[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (NamNhuan(a) == 1) {
        NgayThang[1] = 29;
    }
    if (a.ngay == 1 && a.thang == 1 && a.nam == 1) {
        return a;
    }
    a.ngay--;
    if (a.ngay == 0) {
        a.thang--;
        if (a.thang == 0) {
            a.nam--;
            a.thang = 12;
        }
        a.ngay = NgayThang[a.thang - 1];
    }
    return a;
}