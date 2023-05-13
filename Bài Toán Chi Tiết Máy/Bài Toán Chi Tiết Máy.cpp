#include <iostream>
#include "CMay.h"

int main()
{
    CMay a;
    a.Nhap();
    a.Xuat();
    float tien = a.TinhTien();
    cout << "\nTong tien cua may: " << tien;

    return 0;
}
