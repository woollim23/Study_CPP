#include <iostream>
using namespace std;

int main() {
    int min = 101, n;
    int arr[10];
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = n-1; i >= 1; i--)
    {
        for(int j = i-1; j >= 0; j--)
        {
            if((arr[i] - arr[j]) < min)
            {
                min = (arr[i] - arr[j]);
            }
        }
    }
    cout << min;
    // 여기에 코드를 작성해주세요.
    return 0;
}