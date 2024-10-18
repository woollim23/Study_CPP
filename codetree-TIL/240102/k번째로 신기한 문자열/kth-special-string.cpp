#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
using namespace std;

int main() {
    int n, k, i = 0;
    string t;
    string arr[100];

    cin >> n >> k >> t;

    int s_len = t.length();

    while(cin >> arr[i])
    {
        bool check = true;
        for(int j = 0; j < s_len; j++)
        {
            if(arr[i][j] != t[j]) check = false;
        }

        if(check) i++;
    }

    sort(arr, arr + i);

    cout << arr[k-1];
    // 여기에 코드를 작성해주세요.
    return 0;
}