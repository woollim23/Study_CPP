#include <iostream>
#include <climits>
using namespace std;

int main() {
    int min = INT_MAX, cnt = 0;
    int n;
    int arr[100];
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(min == arr[i]) cnt++;
    }

    cout << min << " " << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}