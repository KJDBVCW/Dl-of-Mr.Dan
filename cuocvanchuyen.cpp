#include <iostream>
using namespace std;

int tinhPhiVanChuyen(float trong_luong, float khoang_cach) {
    if (trong_luong < 0 || trong_luong > 20) {
        return -1; // Trọng lượng không hợp lệ
    }
    if (khoang_cach < 10 || khoang_cach > 3000) {
        return -2; // Khoảng cách không hợp lệ
    }
    
    int phi;
    if (trong_luong < 2) {
        phi = 50000;
    } else if (trong_luong <= 6) {
        phi = 80000;
    } else if (trong_luong <= 10) {
        phi = 160000;
    } else {
        phi = 160000 + 80000 * ((int)(trong_luong - 10) / 10);
    }
    
    return phi;
}

int main() {
    float trong_luong, khoang_cach;
    cout << "Nhap trong luong cua goi hang (kg): ";
    cin >> trong_luong;
    cout << "Nhap khoang cach van chuyen (km): ";
    cin >> khoang_cach;

    int phi = tinhPhiVanChuyen(trong_luong, khoang_cach);
    if (phi == -1) {
        cout << "Trong luong khong hop le";
    } else if (phi == -2) {
        cout << "Khoang cach khong hop le";
    } else {
        cout << "Chi phi van chuyen la: " << phi << " VND";
    }

    return 0;
}
