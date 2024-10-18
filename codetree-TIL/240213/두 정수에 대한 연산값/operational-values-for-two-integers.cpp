#include <iostream>
#include <string>
using namespace std;

void Test(int& a, int& b)
{
    if(a > b)
    {
        a += 25;
        b *= 2;
    }
    else
    {
        b += 25;
        a *= 2;
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