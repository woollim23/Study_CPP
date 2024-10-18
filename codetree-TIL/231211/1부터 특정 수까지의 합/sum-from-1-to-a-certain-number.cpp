#include <iostream>
using namespace std;

int test(int n)
{
    int res = 0;

    for(int i = 1; i <= n; i++)
    {
        res += i;
    }

    return res/10;
}

int main() {
    int n;
    cin >> n;

    cout << test(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}