#include <algorithm>
#include <iostream>
using namespace std;
int main() {
int number[] = {30, 12, 55, 31, 98, 11};
// 排序
sort(begin(number), end(number));
for(auto n : number) {
cout << n << " ";
}
cout << endl;
cout << "輸⼊搜尋值：";
int search = 0;
cin >> search;
int* addr = find(begin(number), end(number), search);
cout << (addr != end(number) ? "找到" : "沒有")
<< "搜尋值"
<< endl;
// 反轉
reverse(begin(number), end(number));
for(auto n : number) {
cout << n << " ";
}
cout << endl;
return 0;
}