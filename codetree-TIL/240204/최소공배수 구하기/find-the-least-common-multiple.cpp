#include <iostream>
#include <algorithm>
using namespace std;

void Func(int n, int m)
{
    int res = min(n, m);
    while(res++)
    {
        if((res % n == 0)&&(res % m == 0))
        {
            cout << res;
            break;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    Func(n, m);

    // 여기에 코드를 작성해주세요.
    return 0;
}