#include <iostream>
using namespace std;

int cnt = 0;

int Test(int n)
{
    if(n == 1)
        return cnt;
    cnt++;
    if(n % 2 == 0)
        return Test(n/2);
    else
        return Test(n/3);
}

int main() {
    int n;
    cin >> n;

    cout << Test(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}