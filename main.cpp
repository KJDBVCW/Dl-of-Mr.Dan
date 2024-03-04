#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Mở tệp văn bản để đọc
    ifstream file("main.txt");

    // Kiểm tra xem tệp mở thành công hay không
    if (!file.is_open()) {
        cerr << "Khong th mo tep!" << endl;
        return 1;
    }

    // Đọc từng dòng trong tệp
    string line;
    while (getline(file, line)) {
        // In nội dung của từng dòng ra màn hình
        cout << line << endl;
    }

    // Đóng tệp sau khi sử dụng
    file.close();

    return 0;
}
