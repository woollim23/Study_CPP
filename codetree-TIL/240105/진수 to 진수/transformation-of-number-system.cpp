#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int cnt = 0, sum = 0;
    int a, b, n;//a진수, b진수
    cin >> a >> b >> n;

    //a진수 -> 10진수 변환
    while(1)
    {
        int tmp = 1;
        for(int i = 0; i < cnt; i++)
        {
            tmp *= a;
        }
        sum += (tmp * (n % 10));
        cnt++;
        n /= 10;
        if(n < 1) break;
    }

    n = sum;
    sum = cnt = 0;

    //10진수 -> b진수 변환
    while(1)
    {
        if(n < b)
        {
            arr[cnt++] = n;
            break;
        }

        arr[cnt++] = n % b;
        n /= b;
    }

    for(int i = (cnt-1); i >= 0; i--)
    {
        cout << arr[i];
    }
    return 0;
}