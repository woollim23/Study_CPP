#include <iostream>
using namespace std;

int cnt;

int Test(int n)
{
    if(n == 1) return 0;
    if(n % 2 == 0)
    {
        return 1 + Test(n/2);
    }
    else
    {
        return 1 + Test(n/3);
    }
}


int main() {
    int n;
    cin >> n;

    cout << Test(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}