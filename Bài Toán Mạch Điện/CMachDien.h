﻿#pragma once
#include <iostream>
#include <string>
using namespace std;

//Lớp thuần ảo
class CMachDien
{
public:
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual float TinhDienTro() = 0;
};

