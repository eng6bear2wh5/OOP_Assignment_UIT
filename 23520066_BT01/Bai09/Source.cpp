#include <iostream>
using namespace std;

struct DuongTron 
{
    int x;
    int y;
    int R;
};

void Nhap(DuongTron& a);
float ChuVi(DuongTron a);
float DienTich(DuongTron a);
void Xuat(DuongTron a);

int main()
{
    DuongTron a;
    Nhap(a);
    cout << "Chu vi cua duong tron la: " << ChuVi(a) << endl;
    cout << "Dien tich cua duong tron la: " << DienTich(a) << endl;
    Xuat(a);
    return 1;
}

void Nhap(DuongTron& a) {
    cout << "Moi nhap toa do x cua tam duong tron: " << endl;
    cin >> a.x;
    cout << "Moi nhap toa do y cua tam duong tron: " << endl;
    cin >> a.y;
    cout << "Moi nhap ban kinh duong tron: " << endl;
    cin >> a.R;
}

float ChuVi(DuongTron a) 
{
    float chuvi;
    chuvi = 2 * a.R * 3.14;
    return chuvi;
}

float DienTich(DuongTron a) 
{
    float dientich;
    dientich = a.R * a.R * 3.14;
    return dientich;
}

void Xuat(DuongTron a) 
{
    cout << "Toa do tam cua duong tron la: " << "( " << a.x << "," << a.y << " )" << endl;
    cout << "Ban kinh cua duong tron la: " << a.R << endl;
}