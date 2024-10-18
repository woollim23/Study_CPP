#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(i % 2 == 0) sum1 += arr[i];
        else sum2 += arr[i];
    }

    if(sum2 > sum1) cout << sum2 - sum1;
    else cout << sum1 - sum2;
    // 여기에 코드를 작성해주세요.
    return 0;
}