#include <iostream>
using namespace std;

int main() {
    int arr[1001] = {0,};
    int a, b, sum = 0;
    cin >> a >> b;

    while(1)
    {
        arr[a%b]++;
        a /= b;

        if(a <= 1) break;
    }

    for(int i = 0; i < 1001; i++)
    {
        sum += (arr[i] * arr[i]);
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}