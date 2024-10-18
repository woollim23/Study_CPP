#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, cnt = 0;
    cin >> n;

    while(1)
    {
        int tmp = 1;

        for(int i = 0; i < cnt; i++)
        {
            tmp *= 2;
        }
        sum += (tmp * (n % 10));
        cnt++;
        n /= 10;
        if(n < 1) break;
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}