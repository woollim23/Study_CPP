#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int arr[101];
    int n;
    cin >> n;

    
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sort(arr + 1, arr + i + 1);
        if(i % 2 != 0)
        {
            cout << arr[i/2 + 1] << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}