#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n = 10, sum = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            n = i;
            break;
        }
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum/n;
    // 여기에 코드를 작성해주세요.
    return 0;
}