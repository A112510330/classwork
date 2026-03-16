#include <iostream>
using namespace std;

int main() {
    long long a = 0, b = 1, c;
    double ratio;
    int count = 0;

    cout << a << " " << b << endl;

    while (true) {
        c = a + b;           // 下一項
        ratio = (double)c / b; // 後一項 / 前一項
        count++;

        cout << c << endl;

        if (ratio < 0.619) {
            break;
        }

        a = b;
        b = c;
    }

    cout << "計算次數: " << count << endl;

    return 0;
}