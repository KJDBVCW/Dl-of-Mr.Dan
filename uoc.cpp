#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Nhap vao mot so nguyen n: ";
    cin >> n;

    cout << "Cac uoc cua " << n << " chia het cho 4 la: ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0 && i % 4 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
