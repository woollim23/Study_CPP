#include <iostream>
using namespace std;

int main() {
    int a, b, c, min = 101;
    cin >> a >> b >> c;

    if(a < min) min = a;
    if(b < min) min = b;
    if(c < min) min = c;

    cout << min;
    // 여기에 코드를 작성해주세요.
    return 0;
}