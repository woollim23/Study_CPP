#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int main() {
    int arr[MAX];
    int n, t, max = 1, cnt = 0;
    cin >> n >> t;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool check = false;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= t)
        {
            cnt = 0;
        }
        else
            cnt++;

        if(cnt >= max)
        {
            check = true;
            max = cnt;
        }
    }

    if(check)
        cout << max;
    else
        cout << 0;
    // 여기에 코드를 작성해주세요.
    return 0;
}