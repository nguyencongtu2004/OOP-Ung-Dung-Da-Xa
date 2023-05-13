#include <iostream>
#include "CMay.h"

int main()
{
    CMay a;
    a.Nhap();
    cout << endl;
    a.Xuat();
    cout << "\nTong tien cua may: " << a.TinhTien();
    cout << "\nTong so chi tiet don cua may: " << a.DemChiTietDon();

    return 0;
}
