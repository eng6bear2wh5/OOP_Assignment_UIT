#include "CPhanSo.h"

void CPhanSo::Nhap() {
    cout << "Moi nhap tu so cua phan so: " << endl;
    cin >> TuSo;
    cout << "Moi nhap mau so cua phan so: " << endl;
    cin >> MauSo;
}
void CPhanSo::KiemTra() {
    if (TuSo * MauSo > 0) {
        cout << "Phan So duong." << endl;
    }
    else if (TuSo * MauSo < 0) {
        cout << "Phan so am." << endl;
    }
    else {
        cout << "Phan so bang khong." << endl;
    }
}
void CPhanSo::Xuat() {
    cout << "Tu so cua phan so vua nhap la: " << TuSo << endl;
    cout << "Mau so cua phan so vua nhap la: " << MauSo << endl;

}
