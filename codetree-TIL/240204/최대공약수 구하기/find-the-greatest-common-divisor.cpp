#include <iostream>
using namespace std;

void Func(int n, int m)
{
    int res = 1;

    for(int i = 2; i <= n; i++)
    {
        if((n % i == 0) && (m % i == 0)) res = i;
    }

    cout << res;
}

int main() {
    int n, m;
    cin >> n >> m;

    Func(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}