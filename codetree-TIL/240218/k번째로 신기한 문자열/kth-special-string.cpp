#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
    string arr[100];
    int n, k, cnt = 0;
    string t;

    cin >> n >> k >> t;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
    {
        if(arr[i].substr(0, t.length()) == t)
        {
            cnt++;
            if(cnt == k)
                cout << arr[i];
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}