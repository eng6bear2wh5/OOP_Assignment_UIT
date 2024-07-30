#pragma once
// y = ax + b

class CDuongThang
{
private:
	float a;
	float b;
public:
	CDuongThang();
	CDuongThang(float, float);
	CDuongThang(const CDuongThang&);
	~CDuongThang();
};

