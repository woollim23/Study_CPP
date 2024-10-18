#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0,};
    int cnt = 9, sum = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if((arr[i] >= 250) && (cnt == 9)) cnt = i-1;
    }

    for(int i = 0; i <= cnt; i++)
    {
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (float)sum/(cnt+1);
    // 여기에 코드를 작성해주세요.
    return 0;
}