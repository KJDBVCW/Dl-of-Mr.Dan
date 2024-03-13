#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;

    int total_even = 0;

    // Xác định số lớn nhỏ giữa m và n để lặp
    int start = min(m, n);
    int end = max(m, n);

    // Lặp qua các số từ start đến end và tính tổng các số chẵn
    for (int num = start; num <= end; ++num) {
        if (num % 2 == 0) { // Kiểm tra số chẵn
            total_even += num;
        }
    }

    cout << "Tong cac so chan tu " << start << " đen " << end << " la: " << total_even << endl;

    return 0;
}
