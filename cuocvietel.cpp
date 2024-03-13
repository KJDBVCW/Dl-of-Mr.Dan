#include <iostream>
using namespace std;

float tinhTienCuoc(string goi, int soPhutSuDung) {
    float phiCoBan, mienPhiPhut, phiVuot;
    
    if (goi == "V50") {
        phiCoBan = 50000;
        mienPhiPhut = 300;
        phiVuot = 700;
    } else if (goi == "V70") {
        phiCoBan = 70000;
        mienPhiPhut = 500;
        phiVuot = 500;
    } else if (goi == "V90") {
        phiCoBan = 90000;
        mienPhiPhut = -1; // Không giới hạn
        phiVuot = 0;
    }
    
    int soPhutVuot;
    if (soPhutSuDung > mienPhiPhut) 
    {
        soPhutVuot = soPhutSuDung - mienPhiPhut;
    } else 
    {
        soPhutVuot = 0;
    }

    float tongTien = phiCoBan + soPhutVuot * phiVuot;
    return tongTien;
}

int main() {
    string goi;
    int soPhutSuDung;
    
    cout << "Nhap goi cuoc cua ban (V50, V70, hoac V90): ";
    cin >> goi;
    
    cout << "nhap so phut da su dung: ";
    cin >> soPhutSuDung;
    
    float tongTien = tinhTienCuoc(goi, soPhutSuDung);
    cout << "Tong so tien can thanh toan la: " << tongTien << " dong " << endl;

    return 0;
}
