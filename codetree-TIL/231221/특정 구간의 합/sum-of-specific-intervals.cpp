#include <iostream>
using namespace std;

int arr[100];

void Test(int m)
{
    int a1, a2;
    for(int i = 1; i <= m; i++)
    {
        cin >> a1 >> a2;
        int sum = 0;

        for(int j = a1; j <= a2; j++)
        {
            sum += arr[j];
        }
        cout << sum << endl;
    }
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