#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    // Dữ liệu doanh số bán hàng theo năm
    int salesData[] = {10000, 5000, 7000, 15000};
    string years[] = {"2018", "2019", "2020", "2021"};

    // Tính số lượng dấu "+" tương ứng với mỗi 1000 đơn vị doanh số
    int maxSales = *max_element(salesData, salesData + 4);
    int numPlus[maxSales / 1000];
    for (int i = 0; i < maxSales / 1000; ++i) {
        numPlus[i] = i + 1;
    }

    // Hiển thị biểu đồ
    cout << "BAO CAO DOANH SO BAN HANG" << endl;
    cout << "(Don vi: 1000)" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << years[i] << " ";
        for (int j = 0; j < salesData[i] / 1000; ++j) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
