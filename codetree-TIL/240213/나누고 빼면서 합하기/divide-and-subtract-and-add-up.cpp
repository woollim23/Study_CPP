#include <iostream>
using namespace std;

int a[100] = {};

int Test(int n, int m)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    while(m != 1)
    {
        sum += a[m-1];
        
        if(m % 2 == 0)
            m /= 2;
        else
            m -= 1;
    }

    return sum + a[m - 1];
}

int main() {
    int n, m;
    cin >> n >> m;


    cout << Test(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}