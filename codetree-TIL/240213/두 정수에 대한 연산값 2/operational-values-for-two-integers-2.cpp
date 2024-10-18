#include <iostream>
using namespace std;

void Test(int& a, int& b)
{
    if(a > b)
    {
        b += 10;
        a *= 2;
    }
    else
    {
        a += 10;
        b *= 2;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    Test(a, b);

    cout << a << " " << b;
    // 여기에 코드를 작성해주세요.
    return 0;
}