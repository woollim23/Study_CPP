#include <iostream>
using namespace std;

int func(int arr[], int n, int max){
    if(max < arr[n-1]) max = arr[n-1];
    if(n == 0) return max; 

    return func(arr, n-1, max);

}

int main() {
    int n, max = 0;
    int arr[100];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << func(arr, n, max);
    // 여기에 코드를 작성해주세요.
    return 0;
}