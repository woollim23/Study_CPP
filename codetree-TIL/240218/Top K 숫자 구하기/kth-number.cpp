#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cout << arr[k-1];
    // 여기에 코드를 작성해주세요.
    return 0;
}