#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, sum = 0;

    for(int i = 0; i < 100; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            n = i;
            break;
        }
    }

    for(int i = n; i >= n-3; i--)
    {
        sum += arr[i];
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}