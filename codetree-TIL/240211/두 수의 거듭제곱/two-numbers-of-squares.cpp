#include <iostream>
using namespace std;

int Test(int a, int b)
{
    int n = 1;
    for(int i = 0; i < b; i++)
    {
        n *= a;
    }
    return n;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << Test(a, b);
    // 여기에 코드를 작성해주세요.
    return 0;
}