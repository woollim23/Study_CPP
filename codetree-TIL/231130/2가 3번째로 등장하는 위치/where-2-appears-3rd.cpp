#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 2)
        {
            cnt++;
            if(cnt == 3)
            {
                cout << i + 1;
                break;
            }
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}