#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius;

    cout << "請輸入圓的半徑：";
    cin >> radius;

    double area = M_PI * radius * radius;
    double circumference = 2 * M_PI * radius;

    cout << "圓面積為：" << area << endl;
    cout << "圓周長為：" << circumference << endl;

    return 0;
}