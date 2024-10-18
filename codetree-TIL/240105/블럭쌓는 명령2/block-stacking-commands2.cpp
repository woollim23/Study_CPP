#include <iostream>
using namespace std;

int main() {
    int arr[100] ={0, };
    int n, a, b, k, max = 0;
    cin >> n >> k;

    for(int i = 1; i <= k; i++)
    {
        cin >> a >> b;
        for(int j = a; j <= b; j++)
        {
            arr[j]++;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] > max) max = arr[i];
    }

    cout << max;
    // 여기에 코드를 작성해주세요.
    return 0;
}