#include <iostream>
using namespace std;

int Test(int a)
{
    if(a < 10)
        return a;

    return (a % 10) + Test(a / 10);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << Test(a * b * c);
    // 여기에 코드를 작성해주세요.
    return 0;
}