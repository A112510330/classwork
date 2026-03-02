#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "請輸入一個整數：";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "這是偶數" << endl;
    }
    else
    {
        cout << "這是奇數" << endl;
    }

    return 0;
}