#include <iostream>
#define MAX 100
using namespace std;

int a[MAX];

void Test(int m)
{
    for(int i = 0; i < m; i++)
    {
        int a1, a2, sum = 0;
        cin >> a1 >> a2;

        for(int j = (a1-1); j <= (a2-1); j++)
            sum += a[j];

        cout << sum << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    Test(m);
    // 여기에 코드를 작성해주세요.
    return 0;
}