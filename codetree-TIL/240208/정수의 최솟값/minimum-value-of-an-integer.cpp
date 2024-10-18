#include <iostream>
using namespace std;

int Test(int a, int b, int c)
{
    if(a < b)
    {
        if(a < c)
            return a;
        else
            return c;
    }
    else
    {
        if(b < c)
            return b;
        else
            return c;
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << Test(a, b, c);
    // 여기에 코드를 작성해주세요.
    return 0;
}