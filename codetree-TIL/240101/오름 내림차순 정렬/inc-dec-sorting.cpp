#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    sort(arr, arr + n, greater<int>());

    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}