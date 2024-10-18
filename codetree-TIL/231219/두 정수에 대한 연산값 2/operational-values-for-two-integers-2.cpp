#include <iostream>
#include <string>
using namespace std;

void Test(int &a, int &b)
{
    if(a > b)
    {
        a *= 2;
        b += 10;
    }
    else
    {
        b *= 2;
        a += 10;
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