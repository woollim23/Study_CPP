#include <iostream>
#include <string>
using namespace std;

int arr[100];

void Test(int m)
{
    int sum = 0;

    sum += arr[m];
    while(m > 1)
    {
        if(m % 2 != 0)
            m -= 1;
        else
            m /= 2;
        sum += arr[m];
    }
    cout << sum;
}

int main() {
    int n, m;

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    Test(m);
    // 여기에 코드를 작성해주세요.
    return 0;
}