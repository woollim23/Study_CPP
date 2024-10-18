#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[1000] = {0,};
    int n, idx;

    cin >> n;

    idx = n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while(1)
    {
        int max = INT_MIN;

        if(idx == 0) break;

        for(int i = 0; i < idx; i++)
        {
            if(max < arr[i])
            {
                max = arr[i];
            }
        }

        for(int i = 0; i < idx; i++)
        {
            if(max == arr[i])
            {
                cout << i + 1 << " ";
                idx = i;
                break;
            }
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}