#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Nhap  m: ";
    cin >> m;
    cout << "Nhap  n: ";
    cin >> n;

    int total_odd = 0;

    // Xác định số lớn nhỏ giữa m và n để lặp
    int start = min(m, n);
    int end = max(m, n);

    // Lặp qua các số từ start đến end và tính tổng các số lẻ
    for (int num = start; num <= end; ++num) {
        if (num % 2 != 0) { // Kiểm tra số lẻ
            total_odd += num;
        }
    }

    cout << "Tong cac so le tu " << start << " den " << end << " la: " << total_odd << endl;

    return 0;
}
