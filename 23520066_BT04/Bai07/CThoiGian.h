#pragma once
class CThoiGian
{
private:
	int gio;
	int phut;
	int giay;
public:
	CThoiGian();
	CThoiGian(int, int, int);
	CThoiGian(const CThoiGian&);
	~CThoiGian();
};

