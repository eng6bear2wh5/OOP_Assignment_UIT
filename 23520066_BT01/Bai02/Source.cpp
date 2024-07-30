#include <iostream>
using namespace std;

struct ToaDoDiem 
{
	float x;
	float y;
};

void Nhap(ToaDoDiem& a);
void Xuat(ToaDoDiem a);
float KhoangCach(ToaDoDiem a, ToaDoDiem b);

int main() 
{
	ToaDoDiem a, b;
	cout << "Moi nhap toa do cua diem thu nhat: " << endl;
	Nhap(a);
	cout << "Moi nhap toa do cua diem thu hai: " << endl;
	Nhap(b);
	int ketqua = KhoangCach(a, b);
	Xuat(a);
	Xuat(b);
	cout << "Khoang cach giua 2 diem la: " << ketqua;
	return 1;
}

void Nhap(ToaDoDiem& a) {
	cout << "Nhap x: " << endl;
	cin >> a.x;
	cout << "Nhap y: " << endl;
	cin >> a.y;
}

void Xuat(ToaDoDiem a) {
	cout << "Toa do x la: " << a.x << endl;
	cout << "Toa do y la: " << a.y << endl;
}

float KhoangCach(ToaDoDiem a, ToaDoDiem b) {
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}