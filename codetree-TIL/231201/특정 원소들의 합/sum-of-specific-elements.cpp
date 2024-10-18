#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int arr[4][4];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}