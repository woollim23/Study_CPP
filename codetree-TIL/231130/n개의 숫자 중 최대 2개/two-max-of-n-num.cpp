#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i= 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    cout << arr[0] << " " << arr[1];
    // 여기에 코드를 작성해주세요.
    return 0;
}