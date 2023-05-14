#pragma once
#include <iostream>
using namespace std;

class CNgay
{
private:
	int Ngay;
	int Thang;
	int Nam;

public:
	friend istream& operator >> (istream&, CNgay&);
	friend ostream& operator << (ostream&, CNgay&);

	CNgay();
	CNgay(int, int, int);
	CNgay(const CNgay&);
	~CNgay();
};