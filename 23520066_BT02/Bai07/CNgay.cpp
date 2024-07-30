#include "CNgay.h"

int CNgay::NamNhuan() {
    if (nam % 4 == 0 && nam % 100 != 0) {
        return 1;
    }
    if (nam % 400 == 0) {
        return 1;
    }
    return 0;
}
CNgay CNgay::TruocDo(CNgay& temp) {
    int NgayThang[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (NamNhuan() == 1) {
        NgayThang[1] = 29;
    }
    temp.ngay = ngay - 1;
    if (temp.ngay == 0) {
        temp.thang = thang - 1;
        if (temp.thang == 0) {
            temp.nam = nam - 1;
            temp.thang = 12;
        }
        temp.ngay = NgayThang[thang - 1];
    }
    return temp;
}
void CNgay::Nhap() {
    cout << "Moi nhap ngay: " << endl;
    cin >> ngay;
    cout << "Moi nhap thang: " << endl;
    cin >> thang;
    cout << "Moi nhap nam: " << endl;
    cin >> nam;
}
void CNgay::Xuat() {
    cout << "Ngay thang nam la: " << ngay << "/" << thang << "/" << nam << endl;
}
