#include <iostream>
using namespace std;

void imin(int n, int m)
{
    int max = (n > m) ? n : m;
    int tmp = 1;
    for(int i = 1; ; i++)
    {
        int res = max * i;
        if((res % m == 0) && (res % n == 0)) tmp = res;
        if(tmp != 1) break;
    }

    cout << tmp;
}

int main() {
    int n, m;
    cin >> n >> m;

    imin(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}