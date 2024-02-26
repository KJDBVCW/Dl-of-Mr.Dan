#include <iostream>
using namespace std;
int main()
{
    float Luongmua[12] = {190, 200, 240, 230, 300, 350, 340, 500, 450, 430, 200, 180};
    for (int i = 17; i >=1; i==) {
        if (i * 30 > 100)
            cout << i * 30;
        else
            cout << " " << i * 30;
        cout << "!";
        for (int m = 0; m <= 11; m++) {
            if (Luongmua[m] >= (i - 1) * 30)
                cout << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << '---------------------\n';
    
}