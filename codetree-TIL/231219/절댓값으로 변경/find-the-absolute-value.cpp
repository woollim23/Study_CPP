#include <iostream>
using namespace std;

void Test(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] < 0) arr[i] *= -1;
    }
}

int main() {
    int arr[50];
    int n;
    cin >> n;
    
    Test(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}