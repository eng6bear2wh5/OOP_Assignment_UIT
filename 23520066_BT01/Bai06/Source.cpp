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
Ngay KeTiep(Ngay a);
int NamNhuan(Ngay a);

int main()
{
    Ngay a;
    Nhap(a);
    Ngay kq = KeTiep(a);
    cout << "\nNgay ban dau la: ";
    Xuat(a);
    cout << "\nNgay luc sau la: ";
    Xuat(kq);
    return 1;
}

void Nhap(Ngay& a) 
{
    cout << "Moi nhap ngay: " << endl;
    cin >> a.ngay;
    cout << "Moi nhap thang: " << endl;
    cin >> a.thang;
    cout << "Moi nhap nam: " << endl;
    cin >> a.nam;

}

int NamNhuan(Ngay a) 
{
    if (a.nam % 4 == 0 && a.nam % 100 != 0)
    {
        return 1;
    }
    if (a.nam % 400 == 0) {
        return 1;
    }
    return 0;
}

Ngay KeTiep(Ngay a) 
{
    int NgayThang[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (NamNhuan(a) == 1) {
        NgayThang[1] = 29;
    }
    a.ngay += 1;
    if (a.ngay > NgayThang[a.thang - 1]) {
        a.thang++;
        if (a.thang > 12) {
            a.thang = 1;
            a.nam++;
        }
        a.ngay = 1;
    }
    return a;
}

void Xuat(Ngay a) 
{
    cout << a.ngay << "/" << a.thang << "/" << a.nam << endl;
}