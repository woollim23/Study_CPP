#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    arr[0] = 1;
    cin >> arr[1];

    cout << arr[0] << " " << arr[1] << " ";

    for(int i = 2; i < 1000; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        cout << arr[i] << " ";

        if(arr[i] > 100) break;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}