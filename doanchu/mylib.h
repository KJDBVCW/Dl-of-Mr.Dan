#include <iostream>
#include <sstream>
#include <fstream>
#include <codecvt>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <locale>
using namespace std;

// Chức năng kiểm tra xem chữ cái đoán được có trong từ hay không
bool isLetterInWord(char letter, const string& word) {
    for (char c : word) {
        if (c == letter) {
            return true;
        }
    }
    return false;
}

// Chức năng hiển thị trạng thái hiện tại của từ được đoán
void displayWord(const string& guessedWord) {
    for (char c : guessedWord) {
        cout << c << " ";
    }
    cout << endl;
}

// Hàm để đọc từ điển từ tệp văn bản và lưu vào một mảng các chuỗi
// Hàm để đọc từ điển từ tệp văn bản và lưu vào một vector các chuỗi
void NapTuDien(vector<string>& dstu, const char* fileName) {
    wifstream fin(fileName); // Mở tệp văn bản để đọc
    locale loc(locale(), new codecvt_utf8<wchar_t>); // Đặt locale cho đọc UTF-8
    fin.imbue(loc);

    wstring word;
    while (fin >> word) { // Đọc từng từ từ tệp
        // Chuyển đổi từ kiểu wstring sang string và thêm vào vector
        dstu.push_back(wstring_convert<codecvt_utf8<wchar_t>>().to_bytes(word));
    }

    fin.close(); // Đóng tệp
}
