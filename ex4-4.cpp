#include <iostream>
using namespace std;
int main() {
int score = 0;
cout << "輸⼊分數：";
cin >> score;
switch(score / 10) {
case 10: case 9:
cout << "A 級" << endl;
break;
case 8:
cout << "B 級" << endl;
break;
case 7:
cout << "C 級" << endl;
break;
case 6:
cout << "D 級" << endl;
break;
default:
cout << "E 級（不及格）" << endl;
break;
}
return 0;
}
