#include <iostream>
using namespace std;

int main() {
    int n, idx = -1;
    int arr[1001] = {0,};

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[a] += 1;
    }

    for(int i = 1; i <= 1000; i++)
    {
        if(arr[i] == 1)
        {
            idx = i;
        }
    }

    cout << idx;

    // 여기에 코드를 작성해주세요.
    return 0;
}